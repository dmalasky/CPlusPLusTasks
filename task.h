#pragma once
#include <string>
#include "task.h"


using namespace std;

class Task
{
private:

    string start_time;
    string end_time;
    string task_name;
    string task_desc;
    int task_ID;
    static int next_ID;
    
public: 
        
    Task();

    void create_task();
    void display_task();
    int get_task_ID();
    string get_start_time() const;
    string get_end_time() const;
    string get_task_name() const;
    string get_task_desc() const;
    void create_task_from_file(int _task_ID, string _task_name, string _task_desc, string _start_time, string _end_time);
   
   
    



};

