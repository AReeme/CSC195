#include "Employee.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Employee* x = new Employee;
    vector<Employee*> employees;
    unsigned int numEmployees;

    cout << "Number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Information For Employee " << i + 1 << ": " << endl;
        
        x->Read();
       
    }

    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Information For Employee " << i + 1 << ": " << endl;
        
        x->Write();

    }

    for (int i = 0; i < numEmployees; i++)
    {
        employees.clear();
    }
}