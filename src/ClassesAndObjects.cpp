#include <iostream>

#include "Tweeter.hpp"
#include "enum.hpp"

using std::string;
using std::cout;
using std::endl;

// ClassesAndObjects.cpp:  Defines entry point for Console application.
//

void ClassesAndObjects (void)
{
   Tweeter t1("Bob", "Smith", 123, "foo");

   {
      Tweeter t2("Gary", "Jones", 456, "gumby");
      cout << "Name of t2 = " << t2.GetName() << endl;
   }

   Person p1 ("Bob", "Smith", 123);
   Person p2;

   string name = p1.GetName();
   cout << "Name = " << name << endl;
    
}
