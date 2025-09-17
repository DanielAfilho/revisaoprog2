#include <iostream>
using namespace std;

void bissexto(){
    int ano = 0;
    
    cin >> ano;

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "o ano é bissexto" << endl;
    } 
    else{
        cout << "o ano não é bissexto" << endl;
    }
}

int main(){
    bissexto();
}