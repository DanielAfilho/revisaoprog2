#include <iostream>
using namespace std;


void fatorial(){
    int num = 0, limite = 0, resultado = 1;

    cin >> num;

    limite = num;


    for(int i = 1; i <= limite; i++){
        resultado = resultado * i;
    }
    cout << resultado << endl;
}
int main(){
    fatorial();
}