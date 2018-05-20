#pragma once
#include "stdafx.h"
#include	<map>
#include <string>
#include <tuple>
enum class TaskStatus
{
	NEW,
	iN_PROGRESS,
	TESTING,
	DONE
};

using TasksInfo = std::map<TaskStatus, int>;

class TemTasks
{
public:
	const TasksInfo& GetPersonTasksInfo(const std::string& person) const;
	void AddnewTasks(const std::string& person);
	std::tuple<TasksInfo, TasksInfo> PerformPersonTasks(const std::string& person, int task_count);

};