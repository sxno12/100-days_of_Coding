

#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

void print_hello();

int main()
{
    std::cout << "Hello World!\n";
    print_hello();
    Student student1;
    student1.first_name = "Sonomi";
    student1.last_name = "Modica";
    student1.address = "Ontario, Canada";
    student1.age = 19;
    student1.print_info();

    cout << "Please give me your name" << endl;

    //read user input
    string str_name;
    getline(cin, str_name);

    cout << "Name: " << str_name << endl;
}

