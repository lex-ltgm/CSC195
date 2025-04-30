#pragma once

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Animal {
public:
    enum Type { CAT, DOG, BIRD };

protected:
    string name;
    int age;

public:
    virtual ~Animal() = default;
    virtual void read();
    virtual void display();
    virtual void Read(ifstream& istream);
    virtual void Write(ofstream& ostream);
    string getName() { return name; }
    virtual Type getType() = 0;

    friend istream& operator>>(istream& istream, Animal& animal);
    friend ostream& operator<<(ostream& ostream, Animal& animal);
};