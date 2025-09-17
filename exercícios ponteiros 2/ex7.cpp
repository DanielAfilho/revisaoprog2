/*Neste cenário, você será desafiado a criar uma função que aceite um vetor por referência e inverta a ordem de seus elementos.*/


#include <iostream>
#define N 5
using namespace std;

void invertevetor(int *lista){
    int fim = 4, inicio = 0;

    while(inicio < N && fim >= 0){
        lista[inicio] = lista[fim];

        fim--;
        inicio++;
    }
}
int main(){
    int lista[N];

    for(int i = 0; i < N; i++){
        cin >> lista[i];
    }

    invertevetor(&lista[0]);

    for(int i = 0; i < N; i++){
    cout << "lista[" << i << "] - " << lista[i] << endl;
    }

    return 0;
}