/*Neste exercício, você vai criar uma função que aceite um número inteiro por referência, subtraia 5 dele e retorne o resultado.*/

#include <iostream>
using namespace std;

int subtrai5(int *a){
    *a = *a - 5;

    return *a;
}
int main(){

    int num = 0;

    cin >> num;

    num = subtrai5(&num);

    cout << num << endl;
}