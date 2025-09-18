/*A - A alternativa correta é a C, pois ao passar o vetor como parâmetro, independente da maneira usada. O compilador interpretará o parâmetro como um ponteiro
para a primeira posição do vetor*/
/*B - o valor de y após a execução do programa é de 4*/
/*C - V F F*/
/*D - no código abaixo, o ponteiro *p não está declarado corretamente, não aponta pra nenhum endereço de memória*/
/*E - A saída será 9, porque pa recebe o endereço de memória de 0, logo, 1. E pb recebe o endereço de memória de 9, logo, 10*/
/*F - pc1 = 1000, pc2 = 1001, pc3 = 1005, pc4 = 1000*/
/*G 1-
#include <iostream>
using namespace std;

void minMax(int *v, int tamanho, int *minimo, int *maximo) {
    *minimo = *v;
    *maximo = *v;

    for (int i = 1; i < tamanho; i++) {
        if (*(v + i) < *minimo) {
            *minimo = *(v + i);
        }
        if (*(v + i) > *maximo) {
            *maximo = *(v + i);
        }
    }
}

int main() {
    int vetor[] = {10, 4, 25, -3, 15};
    int min, max;

    minMax(vetor, 5, &min, &max);

    cout << "Min: " << min << ", Max: " << max << endl;
} 
G 2 -
#include <iostream>
using namespace std;

int* juntar(int *v1, int n1, int *v2, int n2) {
    int *resultado = new int[n1 + n2];
    int *p = resultado;

    for (int i = 0; i < n1; i++) {
        *(p + i) = *(v1 + i);
    }
    for (int j = 0; j < n2; j++) {
        *(p + n1 + j) = *(v2 + j);
    }

    return resultado;
}

int main() {
    int v1[] = {1, 2, 3};
    int v2[] = {4, 5, 6, 7};

    int *res = juntar(v1, 3, v2, 4);

    for (int i = 0; i < 7; i++) {
        cout << *(res + i) << " ";
    }
    cout << endl;

    delete[] res; /
}
G 3 -
#include <iostream>
using namespace std;

void separar(int *v, int n, int *pares, int *qtdPares, int *impares, int *qtdImpares) {
    *qtdPares = 0;
    *qtdImpares = 0;

    for (int i = 0; i < n; i++) {
        if (*(v + i) % 2 == 0) {
            *(pares + *qtdPares) = *(v + i);
            (*qtdPares)++;
        } else {
            *(impares + *qtdImpares) = *(v + i);
            (*qtdImpares)++;
        }
    }
}

int main() {
    int v[] = {10, 21, 32, 43, 54};
    int pares[5], impares[5];
    int qtdPares, qtdImpares;

    separar(v, 5, pares, &qtdPares, impares, &qtdImpares);

    cout << "Pares: ";
    for (int i = 0; i < qtdPares; i++) cout << *(pares + i) << " ";
    cout << "\nImpares: ";
    for (int i = 0; i < qtdImpares; i++) cout << *(impares + i) << " ";
    cout << endl;
}
*/