#include <iostream>
#include <string>
#include <fstream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Database.h"
using namespace std;


unique_ptr<Animal> Database::Create(int type) {
    unique_ptr<Animal> animal = nullptr;

    if (type == Animal::CAT) {
        animal = make_unique<Cat>();
    }
    else if (type == Animal::DOG) {
        animal = make_unique<Dog>();
    }

    return animal;
}

void Database::addAnimal(Animal::Type type) {
    unique_ptr<Animal> animal = Create(static_cast<int>(type));

    if (animal) {
        cin >> *animal; 
        animals.push_back(move(animal));
    }
}

void Database::showByName(string name) {
    for (const auto& animal : animals) {
        if (animal->getName() == name) {
            cout << *animal << endl; 
        }
    }
}

void Database::showByType(Animal::Type type) {
    for (const auto& animal : animals) {
        if (animal->getType() == type) {
            cout << *animal << endl; 
        }
    }
}

void Database::showAll() {
    for (const auto& animal : animals) {
        cout << *animal << endl; 
    }
}

void Database::removeAll() {
    animals.clear(); 
}

void Database::Load(const string& filename) {
    ifstream input(filename);
    if (input.is_open()) {
        removeAll(); 

        while (!input.eof()) {
            int type;
            input >> type;

            if (input.eof()) break; 

            unique_ptr<Animal> animal = Create(type);
            if (animal) {
                input >> *animal; 
                animals.push_back(move(animal));
            }
        }
    }
}

void Database::Save(const string& filename) {
    ofstream output(filename);
    if (output.is_open()) {
        for (const auto& animal : animals) {
            output << static_cast<int>(animal->getType()) << endl;
            animal->Write(output); 
        }
    }
}