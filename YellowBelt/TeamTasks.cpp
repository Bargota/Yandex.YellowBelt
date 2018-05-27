#include "stdafx.h"
#include "TeamTasks.h"
#include <iostream>
#include <tuple>

std::tuple<TasksInfo, TasksInfo> TeamTasks::PerformPersonTasks(const std::string& person, int task_count)
{
	int count_tasks = CountTasksPerson(person);
	if (count_tasks < task_count)
	{
		task_count = count_tasks;
	}

	TasksInfo update;
	TasksInfo no_update;
	for (auto item : persons[person])
	{
		if (task_count > 0)
		{
			if (item.second > task_count)
			{
				no_update[item.first] = item.second - task_count;
				update[item.first] = task_count;
				task_count = 0;
				
			}
			else
			{
				no_update[item.first] = 0;
				update[item.first] =item.second;
				task_count = task_count - item.second;
			}
			
		}
		else
		{
			no_update[item.first] = item.second;
		}
	}
	
	TasksInfo no_update_with_out_zero = no_update;
	for (auto item : no_update)
	{
		if (item.second == 0)
		{
			no_update_with_out_zero.erase(item.first);
		}
	}

	TasksInfo update_with_out_zero = update;
	for (auto item : update)
	{
		if (item.second == 0)
		{
			update_with_out_zero.erase(item.first);
		}
	}

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
			TasksInfo tasks_info_empty = { std::pair<TaskStatus,int>(TaskStatus::NEW,3),
											std::pair<TaskStatus,int>(TaskStatus::IN_PROGRESS,2),
											std::pair<TaskStatus,int>(TaskStatus::TESTING,4),
											std::pair<TaskStatus, int>(TaskStatus::DONE, 1)
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

int TeamTasks::CountTasksPerson(std::string person)
{
	int summ = 0;
	for (auto item : persons[person])
	{
		summ += item.second;
	}
	return summ;
}