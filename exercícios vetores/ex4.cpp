/*C. Implemente funções (e suas chamadas no main()), de acordo com as três formas
de passagem de vetores por parâmetro, que cumpram as seguintes funcionalidades:
1. Retorne o maior dentre os valores armazenados em um vetor de inteiros.
2. Retorne a média dos elementos de um vetor de inteiros.
3. Retorne o número de elementos positivos armazenados em um vetor de inteiros.
4. Insira n valores em um vetor e apresente-o na função main() (n deve ser fornecido
como parâmetro.)*/
#include <iostream>
#define X 5
using namespace std;
void metodo1(int v[], int n){
    int maior = 0;
    float media = 0;
    int positivo = 0;

    for(int i = 0; i < n; i++){
        media += v[i];
        if(maior < v[i]){
            maior = v[i];
        }
        if(v[i] > 0) positivo++;
    }
    media = media/n;
    cout << "maior número: " << maior << endl;
    cout << "média: " << media << endl;
    cout << "Número de positivos: " << positivo << endl;

}
void metodo2(int v[X]){
    int maior = 0;
    float media = 0;
    int positivo = 0;

    for(int i = 0; i < X; i++){
        media += v[i];
        if(maior < v[i]){
            maior = v[i];
        }
        if(v[i] > 0) positivo++;
    }
    media = media/X;
    cout << "maior número: " << maior << endl;
    cout << "média: " << media << endl;
    cout << "Número de positivos: " << positivo << endl;
}
void metodo3(int *v, int n){
    int maior = 0;
    float media = 0;
    int positivo = 0;

    for(int i = 0; i < n; i++){
        media += v[i];
        if(maior < v[i]){
            maior = v[i];
        }
        if(v[i] > 0) positivo++;
    }
    media = media/n;
    cout << "maior número: " << maior << endl;
    cout << "média: " << media << endl;
    cout << "Número de positivos: " << positivo << endl;

}
int main(){
    int media;
    int N;
    cout << "Tamanho do vetor: " << endl;
    cin >> N;
    int v[N];

    for(int i = 0; i < N; i++){
    cin >> v[i];
    }
    metodo1(v, N);
    metodo2(v);
    metodo3(v, N);

    return 0;
}