/*Neste caso, desenvolva uma função que receba um número inteiro por valor, some 10 a ele e retorne o resultado.*/

#include <iostream>
using namespace std;

int soma10(int a){
    a = a + 10;

    return a; 
}
int main(){
    int num = 0;

    cin >> num;

    num = soma10(num);

    cout << num;
}