#include "PersonType.h"

PersonType::PersonType() {
	ssn = 0;
}
PersonType::PersonType(std::string fName, std::string lName, int SSN) {
	ssn = SSN;
	firstName = fName;
	lastName = lName;
}
void PersonType::printSSN() {
	std::string s = std::to_string(ssn);
	for (int i = 0; i < s.length(); i++) {
		
		if (i == 3 || i == 5) {
			std::cout << "-";
		}
		std::cout << s[i];
	}
}
PersonType::~PersonType() {

}




