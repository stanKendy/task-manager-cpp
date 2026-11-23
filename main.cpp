#include <iostream>
#include "task.h"
int main() {
    Task t1("Buy milk", 2);
    Task t2("Sell milk", 3);
    t1.markAsDone();
    std::string sentence1 = t1.toString();
    std::string sentence2 = t2.toString();
    std::cout << sentence1 << std::endl;
    std::cout << sentence2 << std::endl;
}