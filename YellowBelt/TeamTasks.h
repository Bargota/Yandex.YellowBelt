#pragma once
#include "stdafx.h"
#include	<map>
#include <string>
#include <tuple>
#include <map>
enum class TaskStatus
{
	NEW,
	IN_PROGRESS,
	TESTING,
	DONE
};

using TasksInfo = std::map<TaskStatus, int>;

class TeamTasks
{
	int CountTasksPerson(std::string person);
	std::map<std::string,TasksInfo> persons;
public:
	const TasksInfo& GetPersonTasksInfo(const std::string& person) const;
	void AddnewTasks(const std::string& person);
	void PrintTasksInfo(TasksInfo tasks_info);
	std::tuple<TasksInfo, TasksInfo> PerformPersonTasks(const std::string& person, int task_count);

};