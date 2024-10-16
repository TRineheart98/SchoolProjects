# SchoolWork
Some of the programs I have built for school

Age Calculator Program:

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
