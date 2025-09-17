#include <iostream>
using namespace std;

void potenciacao(){
    int base = 1, expoente = 1, resultado = 1;

    cin >> base >> expoente;

    for(int i = 0; i < expoente; i++){
        resultado *= base;
    }
    cout << resultado;
}
int main(){
    potenciacao();
}