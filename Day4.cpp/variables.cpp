#include <iostream>
using namespace std;

int myNum = 19; //integer (whole #)
int x = 5, y = 6, sum = x + y, z = 50;
double myFloatNum = 5.68; // floating point number (w/ decimal)
char myLetter = 'D'; //character
string myText = "Hello"; //string (txt)
bool myBoolean = true; //boolean (true or false)

int main(){
    //cout << "I am" << myNum << "years old.";
    //cout << sum;
    cout << x + y + z;
    return 0;
}

/*identifiers: unique names given to identify variables (int -->minutes<--)
constants: to prevent others overriding your identifiers (const int myNum)*/
