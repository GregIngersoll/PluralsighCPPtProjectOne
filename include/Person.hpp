#include <string>

class Person
{
    private:
        std::string m_strFirstName;
        std::string m_strLastName;
        int         m_nArbitraryNumber;

    public:
        Person (const std::string & strFirstName, const std::string & strLastName, const int nArbitraryNumber);
        Person ();
        ~Person();
        const std::string GetName(void) const;
};
