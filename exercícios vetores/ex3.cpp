/*A função has_zero() deve retornar true se um dos elementos do vetor tem valor
zero e false se todos os elementos são diferentes de zero. Infelizmente, essa função
contém um erro. Encontre o erro e mostre como arrumá-lo*/

#include <iostream>
#define N 5
using namespace std;

bool has_zero(int *a) {
for (int i = 0; i < N; i++){
if (a[i] == 0) return true;
else return false;
}

}

int main(){
    int a[N];

    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    if(has_zero(a)){
        cout << "a função tem 0" << endl;
    }
    else{
        cout << "a função não tem 0" << endl;
    }
    

    return 0;
}