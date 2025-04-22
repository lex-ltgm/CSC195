#pragma once
#include <iostream>
#include "Animal.h"	
using namespace std;

class Dog : public Animal {
private:
	string breed;

public: 
	void read() override;
	void display() override;
	Type getType() override { return DOG; }
};
