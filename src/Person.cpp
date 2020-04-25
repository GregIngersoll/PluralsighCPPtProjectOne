#include <iostream>

#include "Person.hpp"

using namespace std;

Person::Person (const std::string & strFirstName, const std::string & strLastName, const int nArbitraryNumber)
    : m_strFirstName (strFirstName), m_strLastName (strLastName), m_nArbitraryNumber (nArbitraryNumber)
{
    cout << "Constructing " << m_strFirstName << " " << m_strLastName << endl;
}

Person::Person () : Person ("", "", 0)
{

}

Person::~Person ()
{
    cout << "Destructing" << m_strFirstName << " " << m_strLastName << endl;
}

const std::string Person::GetName (void) const
{
    return (m_strFirstName + "  " + m_strLastName);
}