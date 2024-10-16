#include "Person.h"

int main()
{
    bool validInput = false;
    Person p;

    // Error checking for the name
    do
    {
        validInput = true;
        cout << "Enter full name (max 29 characters): ";
        cin.getline(p.name, 30);

        // Check for empty name
        if (strlen(p.name) == 0)
        {
            cout << "Error: Name cannot be empty." << endl;
            validInput = false;
        }
        else if (cin.fail())  // Check for input failure due to too many characters
        {
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Clear the input buffer
            cout << "Error: Name must be less than 30 characters." << endl;
            validInput = false;
        }
    } while (!validInput);

    // Error checking for the birth year
    do
    {
        validInput = true;
        cout << "Please enter the birth year (e.g., 1980): ";
        cin >> p.birthYear;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Clear the input buffer
            cout << "Error: Please enter a valid integer." << endl;
            validInput = false;
        }
        else if (p.birthYear < 1900 || p.birthYear > td.year)
        {
            cout << "Error: Year must be between 1900 and " << td.year << "." << endl;
            validInput = false;
        }
    } while (!validInput);

    // Error checking for the birth month
    do
    {
        validInput = true;
        cout << "Please enter the birth month (1-12): ";
        cin >> p.birthMonth;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Clear the input buffer
            cout << "Error: Please enter a valid integer." << endl;
            validInput = false;
        }
        else if (p.birthMonth < 1 || p.birthMonth > 12)
        {
            cout << "Error: Month must be between 1 and 12." << endl;
            validInput = false;
        }
    } while (!validInput);

    // Error checking for the birth day with leap year handling
    do
    {
        validInput = true;
        cout << "Please enter the birth day (1-31): ";
        cin >> p.birthDay;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Clear the input buffer
            cout << "Error: Please enter a valid integer." << endl;
            validInput = false;
        }
        else
        {
            int maxDays = 31;  // Default maximum days in a month

            // Adjust maxDays based on the birth month
            if (p.birthMonth == 2) // February
            {
                maxDays = isLeapYear(p.birthYear) ? 29 : 28;
            }
            else if (p.birthMonth == 4 || p.birthMonth == 6 || p.birthMonth == 9 || p.birthMonth == 11) // April, June, September, November
            {
                maxDays = 30;
            }

            if (p.birthDay < 1 || p.birthDay > maxDays)
            {
                cout << "Error: Day must be between 1 and " << maxDays << " for the selected month." << endl;
                validInput = false;
            }
        }
    } while (!validInput);

    cout << endl;
    calculateAge(p);
    displayData(p);

    return 0;
}