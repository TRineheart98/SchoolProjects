# SchoolWork
Some of the programs I have built for school

**Age Calculator Program:**

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

**Linked List Program**

This C++ program generates random odd numbers, stores them in a linked list, and ensures that the list is free of duplicates while maintaining a descending order. It also outputs the results to both the console and a text file for easy reference. The program includes robust error checking and validation, ensuring accurate data management and presentation.
Files and Structure
linkedList.h

    Contains the declaration of the ListNode struct and the LinkedList class.
    Includes functions for adding nodes, checking for duplicates, printing the list, and retrieving the list size.
    Implements functionality to manage the list dynamically and store unique numbers.

main.cpp

    Implements the core logic for generating random odd numbers, adding them to the linked list, and identifying duplicates.
    The program stores 10 random odd numbers and removes any duplicates.
    Duplicates are stored in a separate array and printed both to the console and to a file.

Core Features
Linked List Management:

    The linked list stores unique numbers in descending order, ensuring that no duplicates exist within the list.
    Efficient memory management ensures that nodes are dynamically allocated and properly deleted.

Duplicate Handling:

    Duplicates are detected when adding numbers to the list, stored in a separate array, and counted.
    If duplicates are found, they are printed to the console and saved to a file. Otherwise, the program reports no duplicates.

Input and Output:

    Generates 10 random odd numbers within the range of 1 to 100.
    Outputs the original array, the unique linked list, and any duplicate numbers to both the console and a file (output.txt).

Key Concepts and Tools
Linked List:

    The LinkedList class maintains the list structure, supporting the addition of nodes in descending order and preventing duplicates.
    Includes helper methods for checking if a value exists, adding nodes, printing the list, and retrieving the size of the list.

Input and Output:

    Outputs data to both the console and a text file (output.txt) to provide a clear representation of the results.
    Demonstrates file handling with the ofstream library to write data.

Error Handling:

    Checks for duplicates during node insertion.
    Ensures memory is properly deallocated when the program finishes.

Conclusion

This program demonstrates the use of linked lists for dynamic memory management, random number generation, and file handling. It provides a clean, modular structure with a focus on efficiency, error checking, and output management.
