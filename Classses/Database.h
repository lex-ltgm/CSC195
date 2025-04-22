#pragma once
#include <iostream>
#include "Animal.h"
#include <vector>

class Database {
private: 
	vector<Animal*> animals;

public: 
	~Database();
	void addAnimal(Animal::Type type);
	void showAll();
	void showByName(string name);
	void showByType(Animal::Type type);
		
};
