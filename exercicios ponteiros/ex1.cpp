#include <iostream>
using namespace std;

int main(){
    int i, *p_contador;
    i = 5;
    p_contador = &i;

    cout << "valor de i: " << *p_contador << endl;
    cout << "valor de i: " << p_contador << endl;
    
    return 0;
}

/*observamos que o "valor de i" dado pela variável p_contador
diz respeito ao endereço de memória de i, porque na linha 7
essa variável está recebendo o endereço de i. já o ponteiro
*p_contador está apontando para o conteúdo da variável i, que é 5.*/