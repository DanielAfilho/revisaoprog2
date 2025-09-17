#include <iostream>
using namespace std;

void conversordetemperatura() {
    double C = 0, F = 0;

    cin >> C;

    F = C * 9.0 / 5.0 + 32;
    
    cout << F << endl;
}

int main() {
    conversordetemperatura();
}