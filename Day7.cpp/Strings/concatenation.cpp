#include <iostream>
using namespace std;

//to add strings to create new strings w/ +

string firstName = "John";
string lastName = "Doe";
//string fullName = firstName + " " + lastName;
string fullName = firstName.append(lastName);

int main(){
    cout << fullName;
}

/* + : adds numbers, concatenate strings
cannot add numbers to strings (error) */