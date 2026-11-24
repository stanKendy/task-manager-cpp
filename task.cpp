//
// Created by stanley on 11/22/26.
//

#include "task.h"

#include <iostream>
#include <ostream>

Task::Task (const std::string& title, int priority)
: title(title),priority(priority),done(false)
{}
std::string Task::getTitle() const {
    return title;
}
int Task::getPriority() const {
    return priority;
}
bool Task::isDone() const {
    return done;
}
std::string Task::toString() const {
    std::string mark = done ? "[X]":"[ ]";
    std::string sentence = mark +" " + title +" (Priority" + std::to_string(priority) + " )";
    return sentence;
}
void Task::markAsDone() {
     done = true;
}