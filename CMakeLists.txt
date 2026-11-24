cmake_minimum_required(VERSION 4.4)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(project main.cpp
        task.cpp
        task.h
        taskManager.cpp
        taskManager.h)
