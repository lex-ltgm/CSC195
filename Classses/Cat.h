#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class Cat : public Animal {
private:
	int miceCaught;

public:
	void read() override;
	void display() override;
	Type getType() override { return CAT; }	

};
