#include "CandidateType.h"
#include <iostream>
using namespace std;

int main() {
	string fName = "Bob", lName = "Cherries";
	int ssn = 190456627;
	CandidateType c1;
	c1.setPersonInfo(fName,lName,ssn);
	c1.printCandidateInfo();


}
