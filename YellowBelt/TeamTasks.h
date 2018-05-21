#pragma once
#include "stdafx.h"
#include	<map>
#include <string>
#include <tuple>
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
public:
	const TasksInfo& GetPersonTasksInfo(const std::string& person) const;
	void AddnewTasks(const std::string& person);
	void PrintTasksInfo(TasksInfo tasks_info);
	std::tuple<TasksInfo, TasksInfo> PerformPersonTasks(const std::string& person, int task_count);

};