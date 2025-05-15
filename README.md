# **School Projects**

This repository showcases some of the programs I have developed during my pursuit of a Bachelor’s degree in Computer Science at Northeastern State University. The most complex and challenging projects are listed first. I am on track to graduate in May 2025.

LINK TO CAPSOULS GAME DEVELOPMENT REPOSITORY = https://github.com/TRineheart98/Capsouls-Game
## **C++ Payroll Processing Queue Program**

This C++ program processes payroll for employees using a queue data structure. It reads employee information from a CSV file, calculates gross pay, taxes, and net pay, and outputs the results to both the console and text files. The program includes error handling, input validation, and a clean separation of logic using header and source files, ensuring modular and maintainable code.

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
    Taxes, including federal tax, state tax, social security, and Medicare, are calculated for each employee. This is the reasoning Tyler Rineheart makes $3000 an hour so that state tax is calculated.
    Net pay is determined by subtracting taxes from the gross pay, and all calculations are verified for accuracy with detailed logging.

Input and Output:

    Reads employee data from a CSV file (payInputs.csv), processes it, and saves the payroll information, including pay stubs, to an output file.
    Individual payrolls are saved to a text file named after my last name (Rineheart.txt).
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

## **C++ Age Calculator Program:**

This C++ program calculates a person’s age based on their birthdate, providing error handling and data validation. It is designed with a clean separation of logic using header and source files, ensuring modular and maintainable code.

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

## **C++ Linked List Program:** 

This C++ program generates random odd numbers, stores them in a linked list, and ensures that only unique numbers are stored in descending order. The program provides error handling and data validation, with a clean separation of logic using header and source files to ensure modular and maintainable code.

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

## **C# Constructor & Deconstructor Program:**

This C# program demonstrates object creation using constructors, destructors, properties, and generics. It also highlights key object-oriented concepts, such as deconstructing class instances, property access, and the use of generic classes. The program features a custom class Rineheart, designed to encapsulate information about a person, including their name and age.

Files and Structure

    Rineheart.cs: Implements the core logic of the program, including:
        Creating instances of the Rineheart class.
        Using constructors, destructors, and deconstructing the class properties.
        Manipulating properties, including setting and getting the bank balance.
        Implementing a generic version of the class.

Core Features

    Object Creation and Initialization:
        The Rineheart class constructor initializes the first name, last name, and age.
        The program allows for multiple instances, showing different ages and names.

    Deconstructing Objects:
        The Deconstruct() method enables extracting class properties using deconstruction syntax, making it easy to access individual components of an object.

    Property Access:
        The BankBalance property demonstrates the use of getter and setter logic in C# for managing private data.

    Generics:
        A generic version of the Rineheart<T> class illustrates how to handle different types within a class, automatically printing out the names provided.

Key Concepts and Tools:

    Constructors and Destructors: The class constructor is responsible for initializing properties, while the deconstructor provides a convenient way to unpack object data.

    Property Management: The BankBalance property shows encapsulation by keeping the backing field private while exposing the value through public accessors.

    Generics: The program includes a generic class Rineheart<T>, which demonstrates how to define a class that can work with any data type.

    User Interaction: The program interacts with users through console output, printing details about the objects created, deconstructed values, and property values.

## **C# String Manipulation & Validation Program:**

This C# program asks the user to identify the coolest person in Harrington's advanced programming class. It utilizes input handling and conditional logic to check if the user’s input matches predefined names, demonstrating basic string manipulation and validation.

Files and Structure

    CoolOrNot.cs: Implements the core logic of the program, including:
        Prompting the user for input.
        Using a method to check if the input matches certain names.
        Displaying feedback to the user based on the correctness of their input.

Core Features

    User Input Handling:
        The program prompts the user to type the name of the coolest person in class.
        Input is taken through the console using Console.ReadLine().

    String Validation:
        The IsTylerOrRineheart() method checks if the input matches either "Tyler" or "Rineheart" by converting the input to uppercase, ensuring case-insensitive comparison.
        Conditional logic provides feedback to the user based on whether they input the correct name.

Key Concepts and Tools

    String Manipulation:
        The ToUpper() method ensures that the comparison is case-insensitive, simplifying the validation logic.

    Conditional Logic:
        The program uses an if-else statement to determine if the user's input matches the target names and responds accordingly.

    User Interaction:
        The program engages the user by asking a question and providing feedback based on the input, ensuring a simple and interactive experience.

## **C# String Search Program:**

This C# program explores string manipulation by counting the number of uppercase letters in various strings. It also demonstrates different ways to check for empty and null strings, comparing multiple approaches for verifying string content and attributes. The program includes an example string with letters and a custom function to count uppercase characters in any given string.

Files and Structure

    Program.cs: Implements the core logic of the program, including:
        Declaring and comparing strings to showcase various string validation techniques.
        Invoking a custom method to count uppercase letters in different string variables.
        Outputting the results of uppercase letter counts and string comparisons to the console.

Core Features

    String Comparison and Validation:
        The program compares an empty string using multiple methods, such as checking against string.Empty, verifying length, and using string.IsNullOrEmpty().
        It also demonstrates how to handle null strings, showing different results for null versus empty string comparisons.

    Uppercase Letter Count:
        The SearchString() method loops through each character of the string and counts how many are uppercase.
        This function is invoked on three different strings: an empty string, a pre-defined instructional string (harringtonsString), and an alphabet string (tylersString).

Key Concepts and Tools

    String Manipulation:
        The program demonstrates various techniques to work with strings in C#, such as checking for null, empty values, and measuring string length.

    Looping and Conditionals:
        The program uses a for loop to iterate through the characters in the string and char.IsUpper() to check if each character is uppercase.

    User Interaction:
        The program outputs the results of each string comparison and uppercase letter count, providing feedback directly to the user through the console.

## **C# File Reader and String Analysis Program:**

This C# program demonstrates reading from a text file, splitting strings into words using regular expressions, and analyzing the content by counting words of specific lengths. It includes two files: one containing a set of string operations (textFile.txt) and the other, the program logic (Program.cs), which reads and processes the content of the text file.

Files and Structure

    textFile.txt: Contains sample string operations and comparisons, including:
        Checking if a string is empty or null using different methods.
        Demonstrating how NullReferenceException can be triggered when working with null strings.

    Program.cs: Implements the core logic of the program, including:
        Reading the contents of textFile.txt.
        Splitting the first line of the file into words using a regular expression.
        Counting how many words in the line have more than five characters.

Core Features

    File Reading:
        The program reads the contents of a text file using File.ReadAllLines().
        It handles potential exceptions like FileNotFoundException to ensure robustness when the file is missing.

    String Splitting and Analysis:
        The program splits the first line of the file into individual words using regular expressions that account for non-word characters and spaces.
        It counts how many words in the split string are longer than five characters using LINQ's Count() method.

    String Operations:
        The textFile.txt demonstrates various string operations, such as checking for empty strings, comparing strings with null, and exploring NullReferenceException.

Key Concepts and Tools

    File I/O:
        The program demonstrates basic file input operations, reading the entire content of a text file and processing it line by line.

    Regular Expressions:
        The program uses Regex.Split() to break down a line of text into individual words based on non-alphabetic characters and spaces.

    Error Handling:
        try-catch blocks are used to manage file-related exceptions, ensuring the program gracefully handles situations where the file is not found.

    User Interaction:
        The program outputs the count of words longer than five characters and any error messages directly to the console for user feedback.

## **C# Threading Program:**

This C# program demonstrates multithreading by creating and executing multiple threads. It showcases how to manage threads, handle exceptions within threads, and count the total number of threads used during the program’s execution.

Files and Structure

    Program.cs: Implements the core logic of the program, including:
        Creating and starting threads.
        Using a custom Write() method to print messages from each thread.
        Counting the total number of threads used and displaying it to the user.

Core Features

    Multithreading:
        The program creates and starts two threads (Thread t and Thread t2) using lambda expressions.
        Each thread is responsible for printing a unique message to the console, and the Join() method ensures that the main thread waits for the completion of each created thread.

    Thread-Safe Operations:
        The program uses a try-catch block within the Write() method to handle any potential exceptions that occur during thread execution.
        The threadCount variable is incremented in a thread-safe manner to track how many threads have been used.

    Thread Identification:
        Each thread prints its ManagedThreadId, providing a way to uniquely identify the thread responsible for each message.

Key Concepts and Tools

    Threading:
        The program demonstrates the use of the Thread class to create and manage multiple threads.
        The Start() and Join() methods are used to control thread execution and synchronization.

    Error Handling:
        The Write() method uses exception handling to catch and report any errors that occur within the threads, ensuring robust execution.

    User Interaction:
        The program outputs messages from each thread and displays the total number of threads used at the end, providing clear feedback to the user.
