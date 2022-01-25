#include <iostream>
using namespace std;

int myNum = 5; //Interger (Whole #)
float myFloatNum = 5.68; //Floating Point # (up to 7 decimal digits)
float f1 = 22e5; //use 'e' to indicate 'the power of 10'
double d1 = 12e8;
double myDoubleNum = 7.6429; //Floating Point # (up to 15 decimal digits)
char myLetter = 'F'; //single character/letter/number, use single quotes ''
char a = 83, b = 79, c = 78, d = 79, e = 77, f = 73; //ASCII values
bool myBoolean = true; //true or false (1 or 0)
bool notmyBoolean = false;
string myText = "Hello"; //store sequence of characters (text), use std or string library

int main(){
    cout << "This is my int: " << myNum << "\n";
    cout << "This is my float: " << myFloatNum << "\n";
    cout << "This is my double: " << myDoubleNum << "\n";
    cout << "This is my scientific float: " << f1 << "\n";
    cout << "This is my scientific double: " << d1 << "\n";
    //decide float vs. double when how precise you want to be (double is more precise w/ capacity of 15 decimal digits)

    cout << myBoolean << ",";
    cout << notmyBoolean << "\n";

    cout << myLetter << "\n";

    cout << a;
    cout << b;
    cout << c;
    cout << d;
    cout << e;
    cout << f << "\n";

    cout << myText;
}


