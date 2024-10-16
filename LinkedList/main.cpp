#include "linkedList.h"
#include <cstdlib>
#include <ctime>
#include <fstream>

const int n = 10; // Number of random odd numbers to generate
const int MAX_DUPLICATES = 10; // Maximum number of duplicates that might exist

// Function to generate 10 random odd numbers between 1 and 100
void genRandoms(int RineheartArray[])
{
    srand(static_cast<unsigned int>(time(NULL)));
    for (int r = 0; r < n; r++)
    {
        RineheartArray[r] = (std::rand() % 10) * 2 + 1; // Generate odd numbers between 1 and 100
    }
}

// Function to print an array to both console and a file
void printArrayAndToFile(const int arr[], int size, const string& arrayName, const string& filename)
{
    ofstream outFile(filename, ios::app);

    cout << arrayName << " Array:" << endl;
    outFile << arrayName << " Array:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        outFile << arr[i] << " ";
    }
    cout << endl;
    outFile << endl;

    outFile.close();
}

int main()
{
    int RineheartArray[n]; // Array named after last name, contains 10 random odd numbers
    int TylerArray[MAX_DUPLICATES]; // Array named after first name, stores duplicates
    int duplicateCount = 0; // Counter for duplicates

    // Generate random numbers
    genRandoms(RineheartArray);

    // Linked list to store unique numbers in descending order
    LinkedList list;

    // Add numbers to linked list and handle duplicates
    for (int i = 0; i < n; i++)
    {
        list.addNode(RineheartArray[i], TylerArray, duplicateCount);
    }

    // Print Array 1 (unsorted, may contain duplicates) to console and file
    printArrayAndToFile(RineheartArray, n, "Rineheart", "output.txt");

    // Print Linked List (unique, sorted) to console and file
    list.printListAndToFile("output.txt");

    // Print Array 2 (duplicates) to console and file, with duplicate count
    if (duplicateCount > 0)
    {
        printArrayAndToFile(TylerArray, duplicateCount, "Tyler (Duplicates)", "output.txt");
    }
    else
    {
        cout << "No duplicates found." << endl;
        ofstream outFile("output.txt", ios::app);
        outFile << "No duplicates found." << endl;
        outFile.close();
    }

    // Print the total number of elements in the linked list
    cout << "Total number of unique elements in Linked List: " << list.getSize() << endl;
    ofstream outFile("output.txt", ios::app);
    outFile << "Total number of unique elements in Linked List: " << list.getSize() << endl;
    outFile.close();

    return 0;
}
