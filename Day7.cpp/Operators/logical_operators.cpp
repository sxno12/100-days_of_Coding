#include <iostream>
using namespace std;

//determine logic between variables/values

int x = 8;
int y = 2;
float a, b, c;

int main(){
    a = x < 5 && x < 10;     //logical and: if both true, than true
    b = y < 5 || y < 4;      //logical or: if one is true, than true
    c = !(x < 5 && x < 10);  //logical not: if false, than true and vice versa

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
}