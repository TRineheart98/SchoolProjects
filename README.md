# SchoolWork
Some of the programs I have created during my pursuit in my Computer Science degree.
I am currently set to graduate in May 2025 with a Bachelors in Computer Science from Northeastern State University.

## **Payroll Processing Queue Program**

This C++ program processes payroll for employees using a queue data structure. It reads employee information from a CSV file, calculates gross pay, taxes, and net pay, and outputs the results to both the console and text files. The program includes robust error handling, input validation, and a clean separation of logic using header and source files, ensuring modular and maintainable code.

Files and Structure

    queueOperation.h: Contains the declarations of the Employee structure and the Queue class. It includes utility functions for enqueueing, dequeueing, displaying employees, calculating payroll details (gross pay, taxes, and net pay), and saving pay stubs to a file. The class also provides functionality to read employee data from a CSV file and generate summary reports.
    
    main.cpp: Implements the core logic, including menu options for managing the queue and processing employee payroll. It handles employee enqueueing from a CSV file, dequeuing, and displaying employee information without removing them from the queue. The program also generates pay stubs and summary reports, ensuring accurate output of payroll data.
    
    payInputs.csv: This CSV file contains employee data such as email, first name, last name, job title, hours worked, hourly wage, hours before overtime, overtime rate, and federal tax rate. The program reads this file to populate the queue with employees for payroll processing.

    Sample data from csv:
    Email,FirstName,LastName,JobTitle,HoursWorked,HourlyWage,HoursBeforeOvertime,OvertimeRate,MarginalFederalTaxRate
    tyler.rineheart@gmail.com,Tyler,Rineheart,Software Engineer,40,300,35,1.5,20
    john.doe@gmail.com,John,Doe,Programmer,28,22,30,1.5,15
    jane.smith@gmail.com,Jane,Smith,Database Developer,32,25,30,2.0,18
    emily.jones@gmail.com,Emily,Jones,Networking Engineer,45,28,40,1.5,25

Core Features
Queue Management:

    Employees are stored in a queue data structure with operations to enqueue and dequeue employees.
    The queue supports operations to display employee information without removing them from the queue, ensuring ease of access and management.

Payroll Calculation:

    The program calculates gross pay based on hours worked, considering overtime hours and rates.
    Taxes, including federal tax, state tax, social security, and Medicare, are calculated for each employee.
    Net pay is determined by subtracting taxes from the gross pay, and all calculations are verified for accuracy with detailed logging.

Input and Output:

    Reads employee data from a CSV file (payInputs.csv), processes it, and saves the payroll information, including pay stubs, to an output file.
    Generates a summary report that includes total gross pay, federal taxes, state taxes, and net pay for all employees in the queue.

Error Checking and Validation

    Ensures that queue operations are handled correctly, checking if the queue is full before enqueueing and if it is empty before dequeuing.
    Validates that employee data is correctly formatted and properly handled during payroll calculations.
    Includes checks to ensure that file operations (reading from the CSV and saving pay stubs) are successful.

Key Concepts and Tools
Input Validation:

    The program validates the CSV file contents, ensuring that all required fields (such as hours worked and hourly wage) are correctly processed.
    Provides meaningful error messages if the file cannot be opened or data is missing.

Modular Design:

    Functions are clearly separated between the header and source files, allowing for ease of maintenance and future expansion.

User Interaction:

    The program provides a console menu to interact with users, offering options to create a queue, enqueue employees, dequeue employees, display employee data, and generate reports.

## **Age Calculator Program:**

This C++ program calculates a person’s age based on their birthdate, providing robust error handling and data validation. It is designed with a clean separation of logic using header and source files, ensuring modular and maintainable code.

Files and Structure

    Person.h: Contains the declarations of the Person structure, utility functions for calculating age, and displaying the results. It defines the Today struct representing the current date and encapsulates logic to determine if a year is a leap year.

    main.cpp: Implements the core logic, including gathering user input for name and birthdate with input validation. Error checking is handled through a series of do-while loops to prevent invalid or incomplete data entries. This ensures stability by avoiding crashes and handling edge cases like invalid date formats or leap year calculations.

Core Features

    Age Calculation: The program calculates the person’s age by subtracting the birth year from the current year. Additional checks ensure that the correct age is computed, accounting for whether the birthdate has passed in the current year.

    Leap Year Handling: The program accurately handles leap years during input validation for February birthdays.

    Error Checking and Validation:
        Ensures the name is entered correctly, within the character limit, and isn't empty.
        Validates birth year, ensuring it is within a logical range (1900 - current year).
        Checks birth month and day for validity, accounting for month-specific day limits, including leap years.

Key Concepts and Tools:

    Input Validation: Utilizes input validation techniques to manage invalid input types and clear erroneous input states.
    Modular Design: Functions are clearly separated between files for ease of maintenance and expansion.
    User Interaction: The program interacts with users through a console interface, ensuring a seamless experience with clear error messages and prompts.

## **Linked List Program:** 

This C++ program generates random odd numbers, stores them in a linked list, and ensures that only unique numbers are stored in descending order. The program provides robust error handling and data validation, with a clean separation of logic using header and source files to ensure modular and maintainable code.

Files and Structure

    linkedList.h: Contains the declarations for the ListNode struct and the LinkedList class.
    Implements utility functions for adding nodes, checking for duplicates, printing the list to the console and a file, and retrieving the list size.

    main.cpp: Implements the core logic, including generating random odd numbers and populating the linked list with input validation.
    Handles error checking through validation of input numbers, preventing invalid or duplicate entries.
    Outputs results, including the original array of random numbers, the linked list of unique numbers, and duplicates, both to the console and to a file.

Core Features
Random Number Generation:

    Generates 10 random odd numbers between 1 and 100, ensuring variety and randomness.

Linked List Management:

    Adds random numbers to the linked list in descending order, while checking for and removing duplicates.
    Ensures efficient memory management with dynamic allocation and proper deallocation of nodes.

Duplicate Detection:

    Detects duplicates during insertion into the linked list and stores them in a separate array.
    Outputs any duplicates found to both the console and a file.

Input and Output:

    Outputs the original array (which may contain duplicates), the linked list (unique, sorted in descending order), and the duplicate array to both the console and a text file for further analysis.

Error Checking and Validation

    Ensures random numbers are odd and within the specified range (1 to 100).
    Prevents duplicate entries in the linked list.
    Validates that data is printed and saved correctly, handling any file I/O errors gracefully.

Key Concepts and Tools
Input Validation:

    Manages input data efficiently, ensuring the integrity of the linked list by preventing duplicate entries.

Modular Design:

    Functions are clearly separated between the header and source files, allowing for ease of maintenance and future expansion.

User Interaction:

    The program interacts with users through the console interface, providing clear error messages and feedback when duplicates are found or numbers are inserted into the linked list.
