#include <iostream>
using namespace std;

void encontranumeros(){
    int n1, n2;
    
    cin >> n1 >> n2;

    for(int i = 1; i <= n2; i++){
        n1 = n1 + i;
    }

    cout << n1 << endl;
}
int main(){
    encontranumeros();

}