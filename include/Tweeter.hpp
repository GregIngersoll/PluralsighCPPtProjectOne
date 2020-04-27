#pragma once

#include <string>
#include <Person.hpp>

using std::string;

class Tweeter : public Person
{
    private:
        string m_strTwitterHandle;

    public:
        Tweeter (string strFirst, string strLast, int nArbitrary, string strHandle);
        ~Tweeter();
};