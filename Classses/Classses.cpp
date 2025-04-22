

#include <iostream>
#include "Database.h"
using namespace std;

void showMenu() {
	cout << "\nAnimal Database Menu\n";
	cout << "1. add animal\n";
	cout << "2. show animals\n ";
	cout << "3. find animal by name\n";
	cout << "4. show animal by type\n";
	cout << "5. leave\n";
	cout << "Enter";
}



int main()
{
	Database db;
	int choice;

	do {
		showMenu();
		cin >> choice;

		switch (choice) {
		case 1: {
			cout << "choose type: (0= Cat, 1= Dog): ";
			int type; 
			cin >> type;
			db.addAnimal(static_cast<Animal::Type>(type));
			break;
		}
		case 2:
			db.showAll();
			break;
		case 3: {
			cout << "Name: ";
			string name;
			cin >> name;
			db.showByName(name);
			break;
		}
			case 4: {
				cout << "enter type (0 = Cat, 1=Dog): ";
				int type;
				cin >> type;
				db.showByType(static_cast<Animal::Type>(type));
				break;
			}
			case 5: 
				cout << "bye\n";
				break;
			default: cout << "Pick an option\n";
		}
	} while (choice != 5);
	return 0;
}

