#pragma once

#include <string>
#include <vector>
#include "task.h"
#include <fstream>

using namespace std;



class TaskManager
{
private:

public:

	vector<Task> tasks;

	TaskManager();

	void display_tasks();
	void remove_task(int task_ID);
	void save_task();
	void load_task();

};

