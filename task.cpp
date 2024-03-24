#include "task.h"
#include <iostream>
#include <string>


using namespace std;

Task::Task() : task_name(" "), task_desc(" "), start_time(" "), end_time(" ")
{
}


// Create task with user input.
void Task::create_task()
{
    task_name = " ";
    task_desc = " ";
    start_time = " ";
    end_time = " ";
    
    cout << "Enter Task Name: ";
    cin.ignore();
    getline(cin, task_name);
    
    cout << "Enter Task description: ";
    getline(cin, task_desc);
    
    cout << "Enter start time: ";
    getline(cin, start_time);
    
    cout << "Enter end time: ";
    getline(cin, end_time);

   
    task_ID = next_ID;
    next_ID++;
}

// Creates task function for loading tasks.
void Task::create_task_from_file(int _task_ID, string _task_name, string _task_desc, string _start_time, string _end_time)
{
    task_ID = _task_ID;
    task_name = _task_name;
    task_desc = _task_desc;
    start_time = _start_time;
    end_time = _end_time;
    
}

// Displays one task
void Task::display_task()
{

    cout << "\n" << "Task ID: " << task_ID << "\n" << task_name << ": " << task_desc << "\n" << start_time << " - " << end_time << endl;

}


int Task::get_task_ID()
{
    return task_ID;
}

string Task::get_start_time() const {
    return start_time;
}

string Task::get_end_time() const {
    return end_time;
}

string Task::get_task_name() const {
    return task_name;
}

string Task::get_task_desc() const {
    return task_desc;
}




