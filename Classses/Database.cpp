#include <iostream>
#include <string>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Database.h"

Database::~Database() {
	for (Animal* animal : animals) {
		delete animal;
	}
}

void Database::addAnimal(Animal::Type type) {
	Animal* animal = nullptr;

	if (type == Animal::CAT) {
		animal = new Cat();
	}
	else if (type == Animal::DOG) {
		animal = new Dog();
	}

	if (animal != nullptr) {
		animal->read();
		animals.push_back(animal);
	}
}

void Database::showByName(string name) {
	for (Animal* animal : animals) {
		if (animal->getName() == name) {
			animal->display();
			cout << endl;
		}
	}
}


void Database::showByType(Animal::Type type) {
	for (Animal* animal : animals) {
		if (animal->getType() == type) {
			animal->display();
			cout << endl;
		}
	}
}

void Database::showAll() {
	for (Animal* animal : animals) {
		animal->display();
		cout << endl;
	}
}


