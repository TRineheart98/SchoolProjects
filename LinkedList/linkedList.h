#pragma once
#include <iostream>
#include <fstream>
using namespace std;

struct ListNode
{
    int value;
    ListNode* next;
};

class LinkedList
{
private:
    ListNode* head;
    int listSize;

public:
    LinkedList();
    ~LinkedList();
    void addNode(int num, int duplicates[], int& duplicateCount);
    bool existsInList(int num);
    void printListAndToFile(const string& filename);
    int getSize();
};

// Linked list constructor
LinkedList::LinkedList()
{
    head = NULL;
    listSize = 0;
}

// Linked list destructor
LinkedList::~LinkedList()
{
    ListNode* nodePtr = head;
    while (nodePtr != nullptr)
    {
        ListNode* garbage = nodePtr;
        nodePtr = nodePtr->next;
        delete garbage;
    }
}

// Check if a value exists in the linked list
bool LinkedList::existsInList(int num)
{
    ListNode* nodePtr = head;
    while (nodePtr)
    {
        if (nodePtr->value == num)
            return true;
        nodePtr = nodePtr->next;
    }
    return false;
}

// Add a node to the linked list in descending order
void LinkedList::addNode(int num, int duplicates[], int& duplicateCount)
{
    if (existsInList(num))
    {
        duplicates[duplicateCount++] = num; // Store duplicate in the duplicates array
        return;
    }

    ListNode* myNode = new ListNode;
    myNode->value = num;
    myNode->next = NULL;

    if (!head || head->value <= num) // Insert at the head if empty or larger than head
    {
        myNode->next = head;
        head = myNode;
    }
    else
    {
        ListNode* nodePtr = head;
        ListNode* prevNode = nullptr;
        while (nodePtr != nullptr && nodePtr->value > num)
        {
            prevNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        myNode->next = nodePtr;
        prevNode->next = myNode;
    }

    listSize++;
}

// Print linked list and save to file
void LinkedList::printListAndToFile(const string& filename)
{
    ofstream outFile(filename);
    ListNode* nodePtr = head;

    cout << "Linked List (Unique, Sorted in Descending Order):" << endl;
    outFile << "Linked List (Unique, Sorted in Descending Order):" << endl;

    while (nodePtr)
    {
        cout << nodePtr->value << " ";
        outFile << nodePtr->value << " ";
        nodePtr = nodePtr->next;
    }
    cout << endl;
    outFile << endl;

    outFile.close();
}

// Return the size of the linked list
int LinkedList::getSize()
{
    return listSize;
}
