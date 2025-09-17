#include <iostream>
using namespace std;


int main(){
 int a;
 int *p = NULL;
 p = &a;
 *p = 2;
 
 cout << a << endl;

 return 0;

}