#include "taskManager.h"
#include "task.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <sstream>


using namespace std;



TaskManager::TaskManager()
{
}

// Display all tasks.
void TaskManager::display_tasks()
{
    
    for_each(tasks.begin(), tasks.end(),
        [](auto& task) {
            task.display_task();
        }
    );
    
}

// Remove a task.
void TaskManager::remove_task(int task_ID)
{
    auto new_end = remove_if(tasks.begin(), tasks.end(),
        [task_ID](auto& task) {
            return task.get_task_ID() == task_ID;
        }
    );

    tasks.erase(new_end, tasks.end());

}

// Save Tasks
void TaskManager::save_task()
{
    ofstream outputFile("saved_tasks.txt"); 

    if (outputFile.is_open()) { 
        for (Task task : tasks) {
            outputFile << task.get_task_ID() << "~" << task.get_task_name() << "~" << task.get_task_desc() << "~" << task.get_start_time() << task.get_end_time() << endl;
        }
        outputFile.close(); 
        cout << "Tasks saved to file." << std::endl;
    }
    else {
        cerr << "Failed to open file for writing." << std::endl;
    }
}

void TaskManager::load_task()
{

   ifstream inputFile("saved_tasks.txt");

    if (inputFile.is_open()) { 
        string line;
        while (getline(inputFile, line)) { 
            cout << "Line: " << line << std::endl; 
        }
        inputFile.close(); 
    }
    else {
        std::cerr << "Failed to open file for reading." << std::endl;
    }
}

vector<string> TaskManager::split(string& line, char delimiter)
{
    
    vector<string> tokens;
    istringstream ss(line);
    string token;

    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
    
    return vector<string>();
}
