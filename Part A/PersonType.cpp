#include "PersonType.h"
#include <iostream>
using namespace std;

PersonType::PersonType() //default constructor
{
    firstName;
    lastName;
    ssn = 0;
}
PersonType::PersonType(string fName, string lName,int newSSN) //overloaded constructor
{
    firstName = fName;
    lastName = lName;
    ssn = newSSN;
}
// these are all the public member function used to change private data and print object data
void PersonType::setPersonInfo(string first, string last,int newSSN)
{
    firstName = first;
    lastName = last;
    ssn = newSSN;
}
string PersonType::getFirstName() const
{
    return firstName;
}
string PersonType::getLastName() const
{
    return lastName;
}
int PersonType::getSSN() const
{
    return ssn;
}
void PersonType::printName() const
{
    cout << lastName << ", " << firstName << endl;
}
void PersonType::printPersonInfo() const
{
    printSSN();
    cout << " " << firstName << " " << lastName;
}
void PersonType::printSSN() const
{
    string SSN = to_string(ssn);
    for (int i = 0; i < SSN.length(); i++)
    {
        if (i == 3 || i == 5)
        {
            cout << "-";
        } 
        cout << SSN[i];
    }

}
//
PersonType::~PersonType() //deconstructor
{

}
