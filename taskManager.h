//
// Created by stanley on 11/23/26.
//

#ifndef UNTITLED_TASKMANAGER_H
#define UNTITLED_TASKMANAGER_H
#include "task.h"
#include<vector>
class TaskManager {
    public:
    void addTask(const Task& t);
    void printAll() const;
    void removeTask(int i);
    void markTaskAsDone(int i);

    private:
    std::vector<Task> tasks;
};
#endif //UNTITLED_TASKMANAGER_H
