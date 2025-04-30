#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <string>
#include "Database.h"
using namespace std;

void showMenu() {
    cout << "\nAnimal Database Menu\n";
    cout << "1) Create\n";
    cout << "2) Display All\n";
    cout << "3) Display Name\n";
    cout << "4) Display Type\n";
    cout << "5) Load\n";
    cout << "6) Save\n";
    cout << "7) Quit\n";
    cout << "Enter choice: ";
}

int main()
{
    
    Database* database = new Database();
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Choose type (0=Cat, 1=Dog): ";
            int type;
            cin >> type;
            database->addAnimal(static_cast<Animal::Type>(type));
            break;
        }
        case 2:
            database->showAll();
            break;
        case 3: {
            cout << "Name: ";
            string name;
            cin >> name;
            database->showByName(name);
            break;
        }
        case 4: {
            cout << "Enter type (0=Cat, 1=Dog): ";
            int type;
            cin >> type;
            database->showByType(static_cast<Animal::Type>(type));
            break;
        }
        case 5: {
            cout << "Enter filename: ";
            string filename;
            cin >> filename;
            database->Load(filename);
            break;
        }
        case 6: {
            cout << "Enter filename: ";
            string filename;
            cin >> filename;
            database->Save(filename);
            break;
        }
        case 7:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Please select a valid option\n";
        }
    } while (choice != 7);

    
    delete database;
    _CrtDumpMemoryLeaks();

    return 0;
}