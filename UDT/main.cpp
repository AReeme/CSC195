#include "Employee.h"
#include <iostream>

using namespace std;

int main()
{

    Employee employees[5];
    unsigned int numEmployees;

    cout << "Number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Information For Employee " << i + 1 << ": " << endl;
        
        employees[i].Read();
       
    }

    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Information For Employee " << i + 1 << ": " << endl;
        
        employees[i].Write();

    }
}