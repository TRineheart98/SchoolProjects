#include "queueOperation.h"

void processMenuOption(int option, Queue*& queue) {
    switch (option) {
    case 1: {
        int size;
        cout << "Enter queue size: ";
        cin >> size;

        if (size <= 0) {
            cout << "Invalid queue size, enter a value > 0 " << endl;
            break;
        }
        queue = new Queue(size);
        cout << "Creating queue.." << endl;
        break;
    }

    case 2:
        if (!queue) {
            cout << "Create queue first before enqueue" << endl;
        }
        else {
            string filename = "payInputs.csv"; // CSV file name
            queue->readFromCSV(filename);
        }
        break;

    case 3:
        if (!queue)
            cout << "Create queue first before dequeue" << endl;
        else
            queue->dequeue();
        break;

    case 4:
        if (!queue)
            cout << "Create queue first before display" << endl;
        else
            queue->displayEmployees(); // Call the displayEmployees function from Queue
        break;

    case 5:
        if (queue && !queue->isEmpty()) {
            cout << "Generating summary report and saving pay stubs..." << endl;

            // Generate summary report first, so the data is still in the queue
            queue->generateSummaryReport("summary.txt");

            // Save pay stubs to file after the summary
            queue->savePayStubsToFile("Rineheart.txt");

        }
        else {
            cout << "The queue is empty. Make sure to read and enqueue employee data first." << endl;
        }
        break;

    case 6: {
        if (!queue || queue->isEmpty()) {
            cout << "The queue is empty, nothing to dequeue." << endl;
        }
        else {
            while (!queue->isEmpty()) {
                queue->dequeue();
            }
            cout << "All employees have been dequeued." << endl;
        }
        break;
    }

    case 7:
        cout << "Exiting the menu" << endl;
        break;

    default:
        cout << "Invalid option, enter a value between 1 and 6" << endl;
        break;
    }
}


int main() {
    Queue* queue = nullptr;
    int option = 0;

    do {
        cout << "Enter an option to begin:" << endl;
        cout << "1: Create a queue" << endl;
        cout << "2: Read from CSV and enqueue employees" << endl;
        cout << "3: Remove an employee from the queue (dequeue)" << endl;
        cout << "4: Display all employees" << endl;
        cout << "5: Save pay stubs to file and generate summary report" << endl;
        cout << "6: Dequeue all employees" << endl;
        cout << "7: Exit" << endl;
        cin >> option;

        processMenuOption(option, queue);
    } while (option != 7);

    return 0;
}