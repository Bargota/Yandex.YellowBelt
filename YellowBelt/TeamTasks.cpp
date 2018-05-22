#include "stdafx.h"
#include "TeamTasks.h"
#include <iostream>
#include <tuple>

std::tuple<TasksInfo, TasksInfo> TeamTasks::PerformPersonTasks(const std::string& person, int task_count)
{
	return std::tuple<TasksInfo, TasksInfo> ();
}

void TeamTasks::PrintTasksInfo(TasksInfo tasks_info) {
	std::cout << tasks_info[TaskStatus::NEW] << " new tasks" <<
		", " << tasks_info[TaskStatus::IN_PROGRESS] << " tasks in progress" <<
		", " << tasks_info[TaskStatus::TESTING] << " tasks are being tested" <<
		", " << tasks_info[TaskStatus::DONE] << " tasks are done" << std::endl;
}

void TeamTasks::AddnewTasks(const std::string& person)
{
	if (person != "")
	{
		if (persons.count(person) == 0)
		{
			TasksInfo tasks_info_empty = { std::pair<TaskStatus,int>(TaskStatus::NEW,1),
											std::pair<TaskStatus,int>(TaskStatus::IN_PROGRESS,0),
											std::pair<TaskStatus,int>(TaskStatus::TESTING,0),
											std::pair<TaskStatus, int>(TaskStatus::DONE, 0)
			};
			persons[person] = tasks_info_empty;
		}
		else
		{
			++persons[person][TaskStatus::NEW];
		}
	}
	else
	{
		std::cout << "person is empty" << std::endl;
	}
}
