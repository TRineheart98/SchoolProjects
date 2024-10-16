#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip> 
using namespace std;

struct Employee {
    string email;
    string firstName;
    string lastName;
    string jobTitle;
    double hoursWorked;
    double hourlyWage;
    double hoursBeforeOvertime;
    double overtimeRate;
    double federalTaxRate;
    double grossPay;
    double federalTax;
    double stateTax;
    double socialSecurity;
    double medicare;
    double netPay;

    Employee() //Initializing all the employee field members because VS spams me with warnings to do it, haha!
        : hoursWorked(0), hourlyWage(0), hoursBeforeOvertime(0),
        overtimeRate(0), federalTaxRate(0), grossPay(0), federalTax(0),
        stateTax(0), socialSecurity(0), medicare(0), netPay(0) {
    }
};

struct Queue {
    int queueSize;
    Employee* queueArray;
    int front;
    int rear;
    int numElements;

    Queue(int size) {
        queueSize = size;
        front = -1;
        rear = -1;
        numElements = 0;
        queueArray = new Employee[queueSize];
    }

    bool isFull() {
        return numElements >= queueSize;
    }

    bool isEmpty() {
        return numElements == 0;
    }

    void enqueue(const Employee& emp) {
        if (isFull()) {
            cout << "The queue is full.. " << endl;
            return;
        }

        rear = (rear + 1) % queueSize;
        queueArray[rear] = emp;

        if (front == -1)
            front = 0;

        numElements++;
        cout << emp.firstName << " " << emp.lastName << " was added to the queue" << endl;
    }

    Employee dequeue() {
        if (isEmpty()) {
            cout << "The queue is empty, nothing to remove.. " << endl;
            Employee emptyEmp;
            return emptyEmp;
        }

        Employee emp = queueArray[front];
        front = (front + 1) % queueSize;
        numElements--;
        cout << emp.firstName << " " << emp.lastName << " was removed from the queue" << endl;
        return emp;
    }

    // Display employees without dequeuing
    void displayEmployees() {
        if (isEmpty()) {
            cout << "No employees to display." << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            Employee emp = queueArray[i];
            cout << "Employee: " << emp.firstName << " " << emp.lastName << endl;
            cout << "Gross Pay: $" << emp.grossPay << endl;
            cout << "Net Pay: $" << emp.netPay << endl;
            cout << "-------------------------------" << endl;
        }
    }

    // Payroll Calculations
    double calculateGrossPay(const Employee& emp) {
        double overtimeHours = max(0.0, emp.hoursWorked - emp.hoursBeforeOvertime);
        double regularHours = min(emp.hoursWorked, emp.hoursBeforeOvertime);
        double grossPay = (regularHours * emp.hourlyWage) + (overtimeHours * emp.hourlyWage * emp.overtimeRate);

        // Debug to ensure gross pay calculation is correct
        cout << "Gross Pay Calculation: Regular Hours = " << regularHours << ", Overtime Hours = " << overtimeHours
            << ", Gross Pay = " << grossPay << endl;

        return grossPay;
    }

void calculateTaxes(Employee& emp) {
    emp.federalTax = emp.grossPay * emp.federalTaxRate / 100.0;
    emp.stateTax = emp.grossPay > 10000 ? (emp.grossPay - 10000) * 0.05 : 0.0;
    emp.socialSecurity = emp.grossPay * 0.065;
    emp.medicare = emp.grossPay * 0.005;
    emp.netPay = emp.grossPay - (emp.federalTax + emp.stateTax + emp.socialSecurity + emp.medicare);

    // Debug to ensure tax and net pay calculations are correct
    cout << "Tax Calculation: Federal Tax = " << emp.federalTax << ", State Tax = " << emp.stateTax 
         << ", Net Pay = " << emp.netPay << endl;
}

    // Read from my CSV file to enque the employees
    void readFromCSV(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cout << "Failed to open file: " << filename << endl;
            return;
        }

        string line, word;
        getline(file, line); // Skipping header row because it does not contain employee information

        while (getline(file, line)) {
            Employee emp;
            stringstream ss(line);
            getline(ss, emp.email, ',');
            getline(ss, emp.firstName, ',');
            getline(ss, emp.lastName, ',');
            getline(ss, emp.jobTitle, ',');
            ss >> emp.hoursWorked;
            ss.ignore();
            ss >> emp.hourlyWage;
            ss.ignore();
            ss >> emp.hoursBeforeOvertime;
            ss.ignore();
            ss >> emp.overtimeRate;
            ss.ignore();
            ss >> emp.federalTaxRate;

            // Calculate gross pay and taxes
            emp.grossPay = calculateGrossPay(emp);
            calculateTaxes(emp);

            // Debug print to ensure calculations are correct
            cout << "Enqueuing Employee: " << emp.firstName << " " << emp.lastName << endl;
            cout << "Gross Pay: " << emp.grossPay << endl;
            cout << "Federal Tax: " << emp.federalTax << endl;
            cout << "Net Pay: " << emp.netPay << endl;

            enqueue(emp);
        }

        file.close();
    }

    // Save pay stubs to file
    void savePayStubsToFile(const string& filename) {
        ofstream outFile(filename);
        if (!outFile.is_open()) {
            cout << "Failed to open file: " << filename << endl;
            return;
        }

        // Loop through the queue and write pay stubs without dequeuing
        for (int i = front; i <= rear; i++) {
            Employee emp = queueArray[i];
            outFile << fixed << setprecision(2);
            outFile << "Email: " << emp.email << endl;
            outFile << "Name: " << emp.firstName << " " << emp.lastName << endl;
            outFile << "Gross Pay: $" << emp.grossPay << endl;
            outFile << "Federal Tax: $" << emp.federalTax << endl;
            outFile << "State Tax: $" << emp.stateTax << endl;
            outFile << "Social Security: $" << emp.socialSecurity << endl;
            outFile << "Medicare: $" << emp.medicare << endl;
            outFile << "Net Pay: $" << emp.netPay << endl;
            outFile << "-------------------------------" << endl;
        }

        outFile.close();
    }

    // Generate summary report
    void generateSummaryReport(const string& filename) {
        double totalGrossPay = 0.0;
        double totalFederalTax = 0.0;
        double totalStateTax = 0.0;
        double totalSocialSecurity = 0.0;
        double totalMedicare = 0.0;
        double totalNetPay = 0.0;

        // Print how many employees are currently in the queue
        cout << "Number of employees in the queue: " << numElements << endl;

        // Check if there are any employees to process
        if (numElements == 0) {
            cout << "No employees to process in the summary report." << endl;
            return;
        }

        // Loop through all the employees in the queue and sum their pay details
        for (int i = 0; i < numElements; i++) {
            Employee emp = queueArray[i];

            // Debugging: Print the employee's gross pay and taxes
            cout << "Processing Employee: " << emp.firstName << " " << emp.lastName << endl;
            cout << "Gross Pay: " << emp.grossPay << ", Federal Tax: " << emp.federalTax << ", Net Pay: " << emp.netPay << endl;

            totalGrossPay += emp.grossPay;
            totalFederalTax += emp.federalTax;
            totalStateTax += emp.stateTax;
            totalSocialSecurity += emp.socialSecurity;
            totalMedicare += emp.medicare;
            totalNetPay += emp.netPay;

            // Debugging: Show accumulation progress
            cout << "Accumulated Total Gross Pay: " << totalGrossPay << endl;
            cout << "Accumulated Total Federal Tax: " << totalFederalTax << endl;
            cout << "Accumulated Total Net Pay: " << totalNetPay << endl;
        }

        // Now write the summary to a file
        ofstream reportFile(filename);
        if (!reportFile.is_open()) {
            cout << "Failed to open file: " << filename << endl;
            return;
        }

        reportFile << fixed << setprecision(2);
        reportFile << "Total Gross Pay: $" << totalGrossPay << endl;
        reportFile << "Total Federal Tax: $" << totalFederalTax << endl;
        reportFile << "Total State Tax: $" << totalStateTax << endl;
        reportFile << "Total Social Security: $" << totalSocialSecurity << endl;
        reportFile << "Total Medicare: $" << totalMedicare << endl;
        reportFile << "Total Net Pay: $" << totalNetPay << endl;

        reportFile.close();
    }
};