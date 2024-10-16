#pragma once
#include <iostream>
using namespace std;

struct Today
{
    int year = 2024;
    int month = 8;
    int day = 28;
} td;

struct Person
{
    char name[30];
    int birthDay;
    int birthMonth;
    int birthYear;
    int age;
};

// Function definitions in the header file
void calculateAge(Person& p)
{
    p.age = td.year - p.birthYear;

    if (td.month < p.birthMonth || (td.month == p.birthMonth && td.day < p.birthDay))
    {
        p.age--;
    }
}

// Function to determine if a year is a leap year
bool isLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

//Function to display data
void displayData(const Person& p)
{
    cout << "Person Information: " << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl << endl;
}