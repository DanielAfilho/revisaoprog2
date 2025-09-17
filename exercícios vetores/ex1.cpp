/*Os dois parâmetros recebidos devem ser devolvidos ordenados (para os parâmetros
a e b, o menor dos valores deve ser armazenado em a e o maior em b). Caso sejam
passados valores iguais, a ordem da resposta entre eles não importa*/

#include <iostream>
using namespace std;

void maior_menor(int *a, int *b){
    int maior, menor;

    if((*a) < (*b)) menor = (*a);
    else menor = (*b);

    if((*a) > (*b)) maior = (*a);
    else maior = (*b);

    cout << menor << endl << maior << endl;

}
int main(){
    int a = 0, b = 0;

    cin >> a >> b;

    maior_menor(&a, &b);

    return 0;
}