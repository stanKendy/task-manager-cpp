//
// Created by stanley on 11/22/26.
//

#ifndef UNTITLED_TASK_H
#define UNTITLED_TASK_H
#include <string>
class Task {
    public:
    Task (const std::string& title, int priority);
    std::string getTitle() const;
    int getPriority() const;
    bool isDone() const;
    std::string toString() const;
    void markAsDone();

    private:
    std::string title;
    int priority;
    bool done;
};
#endif //UNTITLED_TASK_H
