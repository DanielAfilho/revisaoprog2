#include <iostream>
using namespace std;

int main(){
    int num, valor;
    int *p;
    num = 55;
    p = &num;
    valor = *p;

    cout << valor << endl;
    cout << p << endl;
    cout << *p << endl;

}
/*A saída valor diz respeito ao conteúdo do ponteiro p,
que por sua vez está recebendo o endereço de memória de num,
ou seja, a saída em questão é 55.
A segunda saída é a variável p, que é o endereço de memória
de num.
Já a terceira saída é o ponteiro p, que é 55 pois p recebe
o endereço de num..*/