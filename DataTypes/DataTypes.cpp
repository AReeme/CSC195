// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Use the unsigned modifier for variable inputs that can not be negative
    string name;
    char initial;
    unsigned int age;
    bool isAdult;
    unsigned int zipcode;
    float wage;
    unsigned short daysWorked;
    unsigned short hoursWorkedPerDay[7]; //[0][1][2][3][4][5][6]
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
    for (int i = 0; i < daysWorked; i++)
    {
        cout << "enter hours worked for day " << i + 1 << ": ";
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
