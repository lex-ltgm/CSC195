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

void Animal::Read(ifstream& istream) {
    istream >> name;
    istream >> age;
}

void Animal::Write(ofstream& ostream) {
    ostream << name << endl;
    ostream << age << endl;
}

istream& operator>>(istream& istream, Animal& animal) {
    animal.read();
    return istream;
}

ostream& operator<<(ostream& ostream, Animal& animal) {
    animal.display();
    return ostream;
}