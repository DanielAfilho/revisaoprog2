#include <iostream>
using namespace std;


void encontravolume(){
    int raio, volume;

    cin >> raio;

    volume = (4*3.14*raio*raio*raio)/3;

    cout << volume << endl;
}
int main(){
    encontravolume();
}