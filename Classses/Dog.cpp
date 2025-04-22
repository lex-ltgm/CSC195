#include <iostream>
#include "Dog.h"
using namespace std;

void Dog::read() {
	Animal::read();
	cout << "What breed? ";
	cin >> breed;
}

void Dog::display() {
	cout << " Dog " << endl;
	Animal::display();
	cout << "Breed: " << breed << endl;

}
