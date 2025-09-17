#include <iostream>
using namespace std;

void trocaporVal(int a, int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
}
void trocaporRef(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a = 5, b = 3;
    cout << "A: " << a << "\tB: " << b << endl;
    trocaporVal(a, b);

    cout << "A: " << a << "\tB: " << b << endl;
    trocaporRef(&a, &b);

    cout << "A: " << a << "\tB: " << b << endl;

    return 0;
}