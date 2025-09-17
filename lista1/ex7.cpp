#include <iostream>
using namespace std;

void areadocirculo(){
    double raio = 0, area = 0;

    cin >> raio;

    area = 3.14 * raio * raio;

    cout << area << endl;
}

int main(){
    areadocirculo();
}