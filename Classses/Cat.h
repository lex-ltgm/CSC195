#pragma once
#include "Animal.h"
#include <iostream>
#include <fstream>
using namespace std;

class Cat : public Animal {
private:
    int miceCaught;

public:
    // Original methods
    void read() override;
    void display() override;

    // File I/O methods
    void Read(ifstream& istream) override;
    void Write(ofstream& ostream) override;

    // Getters
    Type getType() override { return CAT; }
};