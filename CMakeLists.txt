cmake_minimum_required(VERSION 3.22)
project(ee205_lab13a_animal_farm_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ee205_lab13a_animal_farm_3
        Weight.cpp
        Weight.h
        Node.cpp
        Node.h
        config.h
        SinglyLinkedList.cpp
        SinglyLinkedList.h
        Animal.h
        Animal.cpp
        Gender.h
        Mammal.h
        Mammal.cpp
        List.h
        List.cpp
        Color.h
        Cat.h
        Cat.cpp
        main.cpp
        )
