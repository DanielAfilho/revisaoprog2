/*Aqui, você está encarregado de criar uma função 
que aceite dois inteiros como parâmetros por referência, multiplique-os e retorne o resultado.*/

#include <iostream>
using namespace std;

int multiplicacao(int *x, int *y){

    int resultado;

    resultado = *x * (*y);

    return resultado;
}
int main(){
    int num1, num2, soma;
    
    cin >> num1 >> num2;

    soma = multiplicacao(&num1, &num2);

    cout << soma << endl;

    return 0;
}