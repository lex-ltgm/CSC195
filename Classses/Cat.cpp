#include "Cat.h"
#include <iostream>
using namespace std;

void Cat::read() {
	Animal::read();
	cout << "how many mice has the cat caught? ";
	cin >> miceCaught;
}

void Cat::display() {
	cout << "Cat " << endl;
	Animal::display();
	cout << "Mice Caught: " << miceCaught << endl;

}
