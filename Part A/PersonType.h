#pragma once
#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <string>
#include <iostream>

class PersonType {
private:
	std::string firstName;						//string for the first name 
	std::string lastName;						//string for the last name
	int ssn = 0;								//integer for the ssn
public:
	PersonType();										//these are both constructors for the class 
	PersonType(std::string first, std::string last, int ssn);		// ^^^^^^
	void setPersonInfo(std::string first, std::string last, int ssn); //this edits the current details of the class object
	std::string getFirstName() const;  // returns the first name as a string
	std::string getLastName() const;   // returns the last name as a string
	int getSSN() const;		    //returns the person's ssn NOTE: This function doesn't need to be formatted 
	void printName() const;	    //prints the person's name in this format: "lastname, firstname"
	void printPersonInfo() const; // prints all persontype information in the format: "###-##-#### firstname Lastname"
	void printSSN() const;        //prints the ssn in the format: "###-##-####"
	~PersonType();			//default destructor 

};



#endif




