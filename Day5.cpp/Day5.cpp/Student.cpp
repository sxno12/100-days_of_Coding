#include "Student.h"
#include <iostream>


void Student::print_info() {
	cout << "First name: " << first_name << endl;
	cout << "Last_name: " << last_name << endl;
	cout << "Address: " << address << endl;
	cout << "Age: " << age << " years" << endl;
}