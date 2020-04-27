
#include <string>
#include <iostream>

#include <Tweeter.hpp>

using std::string;
using std::endl;
using std::cout;

Tweeter::Tweeter (string strFirstName, string strLastName, int nArbitraruNumber, string strHandle)
   : Person (strFirstName, strLastName, nArbitraruNumber), m_strTwitterHandle (strHandle)
{
   cout << "Constructing tweeter " << m_strTwitterHandle << endl;
}

Tweeter::~Tweeter()
{
   cout << "Destructing tweeter" << endl;
}
