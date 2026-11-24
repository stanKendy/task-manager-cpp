#include <iostream>
#include "task.h"
#include "taskManager.h"
int main() {
    TaskManager manager;
    Task t1("Buy milk", 2);
    Task t2("Sell milk", 3);
    Task t3("Buy salt", 4);
    Task t4("Sell salt", 5);
    Task t5("Buy meat", 6);
    Task t6("Sell meat", 7);
    t1.markAsDone();
    std::string sentence1 = t1.toString();
    std::string sentence2 = t2.toString();
    std::cout << sentence1 << std::endl;
    std::cout << sentence2 << std::endl;
    manager.addTask(t1);
    manager.addTask(t2);
    manager.addTask(t3);
    manager.addTask(t4);
    manager.addTask(t5);
    manager.addTask(t6);
    manager.removeTask(1);
    manager.markTaskAsDone(3);
    manager.markTaskAsDone(4);
    manager.printAll();

}