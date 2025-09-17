/*Neste desafio, crie uma função que tome dois números inteiros como argumento, multiplique-os e retorne o resultado.*/

#include <iostream>
using namespace std;

int multiplicacao(int x, int y){

    int resultado;

    resultado = x * y;

    return resultado;
}
int main(){
    int num1, num2, soma;
    
    cin >> num1 >> num2;

    soma = multiplicacao(num1, num2);

    cout << soma << endl;

    return 0;
}