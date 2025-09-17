#include <iostream>
using namespace std;

int main(){
    int conta = 1;
    float salario = 40000.0;
    char resposta = 'S';

    cout << &conta << endl;
    cout << &salario << endl;
    cout << &resposta << endl;
}

/* aqui a primeira saída é o endereço de memória da variável conta,
a segunda saída é o endereço de memória da variável conta,
e a terceira saída seria o endereço de memória da tabela ASCII
se o código fosse escrito em C*/