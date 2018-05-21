#include "stdafx.h"
#include "TeamTasks.h"
#include <iostream>

std::tuple<TasksInfo, TasksInfo> TeamTasks::PerformPersonTasks(const std::string& person, int task_count)
{
	
}

void TeamTasks::PrintTasksInfo(TasksInfo tasks_info) {
	std::cout << tasks_info[TaskStatus::NEW] << " new tasks" <<
		", " << tasks_info[TaskStatus::IN_PROGRESS] << " tasks in progress" <<
		", " << tasks_info[TaskStatus::TESTING] << " tasks are being tested" <<
		", " << tasks_info[TaskStatus::DONE] << " tasks are done" << std::endl;
}


