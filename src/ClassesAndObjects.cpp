#include <iostream>

#include "Person.hpp"

using namespace std;

// ClassesAndObjects.cpp:  Defines entry point for Console application.
//

void ClassesAndObjects (void)
{
    Person p1 ("Bob", "Smith", 123);
    Person p2;

    std::string name = p1.GetName();
    cout << "Name = " << name << endl;
    
}
