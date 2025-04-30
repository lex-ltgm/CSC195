#include "Dog.h"
#include <iostream>
using namespace std;

void Dog::read() {
    Animal::read();
    cout << "What breed? ";
    cin >> breed;
}

void Dog::display() {
    cout << "Dog " << endl;
    Animal::display();
    cout << "Breed: " << breed << endl;
}

void Dog::Read(ifstream& istream) {
    Animal::Read(istream);
    istream >> breed;
}

void Dog::Write(ofstream& ostream) {
    Animal::Write(ostream);
    ostream << breed << endl;
}