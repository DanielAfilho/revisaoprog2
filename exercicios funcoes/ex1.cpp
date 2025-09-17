#include <iostream>
using namespace std;

void verificamultiplo(){
    int num;
    cin >> num;
    if(num % 4 == 0){
        cout << "o número é múltiplo de 4" << endl;
    }
    else{
        cout << "não é múltiplo de 4" << endl;
    }
}
int main(){
    verificamultiplo();
}