#include "Animal.h"	
#include <iostream>
using namespace std;

void Animal::read() {
	cout << "Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> age;

}

void Animal::display() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;

}