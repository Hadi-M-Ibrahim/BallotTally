#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <string>
#include <iostream>

class PersonType {
private:
	std::string firstName;	// First name stored as string 
	std::string lastName;	// Last name stored as string 
	int ssn = 0;			// Social security number (abbreviated as "ssn") stored as an integer 
public:
	PersonType();	// Default constructor (used when user provides no data)
	PersonType(std::string first, std::string last, int ssn);	// Overload constructor (used when user provides  data)
	void setPersonInfo(std::string first, std::string last, int ssn);	// Allows for the editing of the current details of the private member data
	std::string getFirstName() const;  // Returns the first name as a string
	std::string getLastName() const;   // Returns the last name as a string
	int getSSN() const;	// Returns the ssn as an integer NOTE: This function does not need to be formatted 
	void printName() const;	// Prints the person's name in the following format: "lastname, firstname"
	void printPersonInfo() const; // Prints all persontype information in the following format: "###-##-#### firstname Lastname"
	void printSSN() const;	// Prints the ssn in the following format: "###-##-####"
	~PersonType();			//default destructor 

};



#endif




