#include "Database.h"

using namespace std;

int main()
{
	Database database;
	int userSelection;

	bool quit = false;
	while (!quit)
	{
		cout << "1) Add\n" << "2) Display All\n" << "3) Display Name\n" << "4) Display Type\n" << "5) Load\n" << "6) Save\n" << "7) Quit " << endl;
		cin >> userSelection;
		string name;
		string fileName;
		int type;

		switch (userSelection)
		{
			case 1: //Add
				cout << "\n1) Cat\n";
				cout << "2) Dog\n";
				cout << "Enter type: ";
				cin >> type;
				database.Add(static_cast<Animal::eType>(type));
				break;
			case 2: //Display All
				database.DisplayAll();
				break;
			case 3: //Display Name
				cout << "\nEnter name: ";
				cin >> name;
				database.Display(name);
				break;
			case 4: //Display Type
				cout << "\n1) Cat\n";
				cout << "2) Dog\n";
				cout << "Enter type: ";
				cin >> type;
				database.Display(static_cast<Animal::eType>(type));
				break;
			case 5: //Load
				cout << "Enter File Name." << endl;
				cin >> fileName;
				database.Load(fileName);
				break;
			case 6: //Save
				cout << "Enter File Name." << endl;
				cin >> fileName;
				database.Save(fileName);
				break;
			case 7: //Quit
				quit = true;
				break;
		}
	}
}