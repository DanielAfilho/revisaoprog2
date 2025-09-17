/*Um valor double deve ser decomposto em uma parte inteira e uma parte
fracionária. (Para obter somente a parte inteira do número use o modificador int.
Por exemplo, se na função foi usada uma variável ponteiro denominada *int_part
e uma variável float x para receber o número, use a seguinte expressão para obter
a parte inteira: *int_part = (int) x;.)*/

#include <iostream>
using namespace std;

void separa_decimal(double *a){
    int p_inteira = (*a);
    double p_decimal = (*a) - p_inteira;

    cout << "parte inteira: " << p_inteira << endl;
    cout << "parte decimal: " << p_decimal << endl;
}
int main(){
    double a;

    cin >> a;

    separa_decimal(&a);

    return 0;
}