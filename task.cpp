#include "task.h"
#include <iostream>
#include <string>


using namespace std;

Task::Task() : task_name(" "), task_desc(" "), start_time(" "), end_time(" ")
{
}


// Create task
void Task::create_task()
{
    
    task_name = " ";
    task_desc = " ";
    start_time = " ";
    end_time = " ";
    
    cout << "Enter Task Name: ";
    cin >> task_name;
    
    cout << "Enter Task description: ";
    cin >> task_desc;
    
    cout << "Enter start time: ";
    cin >> start_time;
    
    cout << "Enter end time: ";
    cin >> end_time;

   
    task_ID = next_ID;
    next_ID++;
}

void Task::display_task()
{

    cout << "\n" << "Task ID: " << task_ID << "\n" << task_name << ": " << task_desc << "\n" << start_time << " - " << end_time << "\n" << endl;

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




