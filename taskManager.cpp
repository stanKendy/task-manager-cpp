//
// Created by stanley on 11/23/26.
//

#include "taskManager.h"
#include "task.h"
#include <vector>
#include <iostream>

void TaskManager::printAll() const {
    for (std::size_t index = 0; index < static_cast<int>(tasks.size()); index++) {
        std::cout<<index <<" " <<tasks[index].toString() << std::endl;
    }
}

void TaskManager::markTaskAsDone(int index) {
    if (index < 0 || index >= static_cast<int>(tasks.size())) {
        std::cout<<"Invalid index"<<std::endl;
    }
    else {
        tasks[index].markAsDone();
    }

}
void TaskManager::removeTask(int index) {
    if (index < 0 || index >= static_cast<int>(tasks.size())) {
        std::cout<<"Invalid index"<<std::endl;
    }
    else {
        tasks.erase(tasks.begin() + index);
    }
}
void TaskManager::addTask(const Task& t) {
    tasks.push_back(t);
}