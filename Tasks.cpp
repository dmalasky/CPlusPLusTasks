
#include "task.h"
#include "taskManager.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int Task::next_ID = 0;

int main()
{
    Task task;
    TaskManager taskManager;
    

    bool done = false;
    while (!done) {

        // Menu
        cout << "\nWelcome to Task in C++!\n" << endl;
        cout << "Please select one of the following" << endl;
        cout << "1. Add task" << endl;
        cout << "2. Display tasks" << endl;
        cout << "3. Remove tasks" << endl;
        cout << "4. Save tasks" << endl;
        cout << "5. Load tasks" << endl;
        cout << "6. Quit\n" << endl;
        cout << "> ";

        int choice = 0;
        cin >> choice;

        switch (choice)
        {
        // Create task.
        case 1:
        {
            task.create_task();
            taskManager.tasks.push_back(task);
            break;
        }
        // Display tasks
        case 2:
        {
            taskManager.display_tasks();
            break;
        }
        // Remove Tasks
        case 3:
        {
            cout << "Select Task by ID to remove: " << endl;
            
            taskManager.display_tasks();
            
            cout << "> ";
            string task_string = "";
            cin >> task_string;
            int ID_to_remove = stoi(task_string);

            taskManager.remove_task(ID_to_remove);
            break;
        }
        // Save Tasks
        case 4:
        {
            
            taskManager.save_task();
            break;
        }
        // Load Tasks
        case 5:
        {

            taskManager.load_task();
            break;
        }
        
        default:
            done = true;
            break;
        }
    }
}


