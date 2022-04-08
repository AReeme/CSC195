#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee
{
public:
	void Read();
	void Write();

private:
    string name;
    unsigned int age;
    unsigned int zipcode;
    float wage;
    unsigned short hoursWorked;
    static const float TAX;
};
