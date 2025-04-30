#include "Cat.h"
#include <iostream>
using namespace std;

void Cat::read() {
    Animal::read();
    cout << "How many mice has the cat caught? ";
    cin >> miceCaught;
}

void Cat::display() {
    cout << "Cat " << endl;
    Animal::display();
    cout << "Mice Caught: " << miceCaught << endl;
}

// File I/O methods
void Cat::Read(ifstream& istream) {
    Animal::Read(istream);
    istream >> miceCaught;
}

void Cat::Write(ofstream& ostream) {
    Animal::Write(ostream);
    ostream << miceCaught << endl;
}