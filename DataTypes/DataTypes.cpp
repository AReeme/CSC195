// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    char initial;
    int age;
    bool isAdult;
    string zipcode;
    float wage;
    int daysWorked;
    int hoursWorkedPerDay[10];
    const float TAX = 0.1f;
    int totalHours = 0;
    

    cout << "enter first name: ";
    cin >> name;

    cout << "enter last initial: ";
    cin >> initial;

    cout << "enter age: ";
    cin >> age;
    if (age > 18) isAdult = true;
    else isAdult = false;

    cout << "enter zipcode: ";
    cin >> zipcode;

    cout << "enter wage: ";
    cin >> wage;

    cout << "enter days worked: ";
    cin >> daysWorked;
    for (int i = 1; i < daysWorked + 1; i++)
    {
        cout << "enter hours worked for day " << i << ": ";
        cin >> hoursWorkedPerDay[i];
        totalHours = totalHours + hoursWorkedPerDay[i];
    }

    int gross = totalHours * wage;
    int grossTax = gross * TAX;
    int netIncome = gross - grossTax;

    cout << name << " worked " << totalHours << " hours at $" << wage << " an hour.\n";
    cout << "gross income: $" << gross;
    cout << "\nnet income: $" << netIncome;
}
