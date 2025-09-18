/*A. Implemente uma agenda, a partir da definição de novas estruturas:
Horário: composto de hora e minutos;
Data: composto de dia, mês e ano;
Compromisso: composto de data, horário e texto que descreve o compromisso.*/
#include <iostream>
#include <string>
using namespace std;


struct Horario{
    int horas;
    int minutos;
};
struct Data{
    int dia;
    int mes;
    int ano;
};
struct Compromisso{
    string descricao;
    Data data;
    Horario horario;
};

void preenche_horario(Horario &horario){
    cout << "digite o horário (horas, minutos): " << endl;
    cin >> horario.horas >> horario.minutos;
}
void preenche_data(Data &data){
    cout << "digite a data (dia, mes, ano): " << endl;
    cin >> data.dia >> data.mes >> data.ano;
}
void preenche_compromisso(Compromisso &afazer){
    
    preenche_data(afazer.data);
    preenche_horario(afazer.horario);
    
    cout << "descreva o seu compromisso: " << endl;
    cin.ignore();
    getline(cin, afazer.descricao);


}
void mostra_agenda(Compromisso &afazer){
    cout << "Descrição do compromisso: " << afazer.descricao << endl;
    cout << "Data: " << afazer.data.dia << "/" << afazer.data.mes << "/" << afazer.data.ano << "\t";
    cout << "Horário: " << afazer.horario.horas << ":" << afazer.horario.minutos << endl;
}

int main(){
    Compromisso meu_compromisso;


    preenche_compromisso(meu_compromisso);

    mostra_agenda(meu_compromisso);

    return 0;

}
