#include <iostream>
#include <string>
using namespace std;

string firstName;
string fullName;

int main(){
    cout << "Type your first name: ";
    //cin >> firstName;      //display string entered by user
    getline (cin, fullName); //use <string> library to use getline()
    //cout << "Your name is: " << firstName;
    cout << "Your name is: " << fullName;


}