#include "Employee.h"

using namespace std;

const float Employee::TAX = 0.01f;

void Employee::Read()
{
	cout << "Enter Name: ";
	cin >> name;

	cout << "Enter Age: ";
	cin >> age;

	cout << "Enter Zip Code: ";
	cin >> zipcode;

	cout << "Enter Wage: ";
	cin >> wage;

	cout << "Enter Hours Worked Per Week: ";
	cin >> hoursWorked;
}

void Employee::Write()
{
	cout << name << endl;

	cout << age << endl;

	cout << zipcode << endl;

	cout << wage << endl;

	cout << hoursWorked << endl;

	int gross = hoursWorked * wage;
	int grossTax = gross * TAX;
	int netIncome = gross - grossTax;

	cout << name << "'s Weekly Gross Pay is: $" << gross << endl;

	cout << name << "'s Weekly Net Pay is: $" << netIncome << endl;

	cout << name << "'s Yearly Gross Pay is: $" << gross * 52 << endl;

	cout << name << "'s Yearly Net Pay is: $" << netIncome * 52 << endl;
}