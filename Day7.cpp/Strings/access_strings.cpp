#include <iostream>
using namespace std;

// use [] to access string by referring to index #

string myString = "Hello";

int main(){
    cout << myString[0] << "\n";
    cout << myString[3] << "\n";

    myString[0] = 'J'; //change specific character in string
    cout << myString;
}