#pragma once


#include <string>
#include <iostream>
using namespace std;

class Animal {
public: 
	enum Type { CAT, DOG, BIRD };
protected: 
	string name;
	int age;

public: 
	virtual void read();
	virtual void display();

	string getName() { return name; }
	virtual Type getType() = 0;

};