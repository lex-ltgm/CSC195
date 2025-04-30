#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "Animal.h"
using namespace std;

class Database {
private:
    vector<unique_ptr<Animal>> animals;

public:
    ~Database() = default; 

    
    void addAnimal(Animal::Type type);
    void showAll();
    void showByName(string name);
    void showByType(Animal::Type type);

    
    unique_ptr<Animal> Create(int type); 
    void removeAll(); 

    void Load(const string& filename);
    void Save(const string& filename);
};