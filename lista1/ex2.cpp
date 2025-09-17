#include <iostream>
using namespace std;

bool verificapar(){
    int num;

    cin >> num;
    
    return (num % 2 == 0 ? true : false);
}
int main(){
    if(verificapar()){
        cout << "o número é par" << endl;
    }
    else{
        cout << "o número não é par" << endl;
    }
}