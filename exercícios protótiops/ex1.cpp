/*Exercício 1 - Na linha 21, a saída será a mesma entrada dada pelo usuário, devido
a não utilização de ponteiro. Já na linha 23, o retorno da função está sendo atribuído à uma variável x.
Se a instrução da linha 23 fosse substituida por cout << nome << endl; Não teria nada na saída, porque a variável nome tem escopo local*/

/*Exercício 2 - As funções que tem retorno são identificadas pelo tipo da variável da função, se não houver nenhum tipo,
ou seja, "void" ela não tem retorno*/

/*Exercício 3 - a primeira função tem retorno inteiro mas não parâmetro, a segunda não tem retorno e tem um
parâmetro como inteiro positivo. Já a terceira tem retorno como um inteiro, e tem um parãmetro de um ponteiro
de um caractere constante*/

/*Exercício 4*/


/*#include <iostream>
using namespace std;

int a = 0;

void soma(){
    cin >> a;

    a > 0 ? a += 1 : a = 0;

}
int main(){
    soma();

    cout << a;
}*/

/*Exercício 5
#include <iostream>
using namespace std;

double AreaRetangulo(double *a, double *b){
    double area = (*a) * (*b);

    return area;
}
int main(){
    double a, b, area;
    cin >> a >> b;

    area = AreaRetangulo(&a, &b);

    cout << area << endl;

    return 0;
}*/

/*#include <cstdlib>
#include <iostream>
using namespace std;

void GerarNumeroAleatorio(){

int numero = (rand() % 100) + 1;

cout << numero;

}
int main(){
    GerarNumeroAleatorio();
}*/