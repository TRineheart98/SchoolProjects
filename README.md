# SchoolWork
Some of the programs I have built for school

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
linkedList.h

    Contains the declarations for the ListNode struct and the LinkedList class.
    Implements utility functions for adding nodes, checking for duplicates, printing the list to the console and a file, and retrieving the list size.

main.cpp

    Implements the core logic, including generating random odd numbers and populating the linked list with input validation.
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
