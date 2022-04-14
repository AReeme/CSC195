#include "Employee.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<Employee> employees;
    unsigned int numEmployees;

    cout << "Number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Information For Employee " << i + 1 << ": " << endl;
        
        Employee x;
        x.Read();
        employees.push_back(x);
       
    }

    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Information For Employee " << i + 1 << ": " << endl;
        
        employees[i].Write();

    }

    for (int i = 0; i < numEmployees; i++)
    {
        employees.clear();
    }
}