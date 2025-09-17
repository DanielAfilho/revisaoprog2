#include <iostream>
using namespace std;

int main(){
    float numero1 = 7.3, numero2;
    float *fP;
    fP = &numero1;

    cout << fP << endl;

    numero2 = *fP;

    cout << numero2 << endl;

    cout << &numero1 << endl;

    cout << &fP << endl;


}
/*Sim, o valor impresso &fP é o mesmo que o endereço
de numero1*/