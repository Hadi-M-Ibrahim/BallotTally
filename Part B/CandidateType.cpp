#include <iostream>
#include <string>
#include "CandidateType.h"

using namespace std;

CandidateType::CandidateType()
{
    int numOfVotes = 0;
    int campusVotes[NUM_OF_CAMPUSES] = { 0 };
}
void CandidateType::updateVotesByCampus(int choice, int votes) //updates the total number of votes for a campus
{
    switch (choice)
    {
    case 1:
        if (choice == 1)
        {
            campusVotes[0] = votes;
            numOfVotes += votes;
        }
        break;
    case 2:
        if (choice == 2)
        {
            campusVotes[1] = votes;
            numOfVotes += votes;
        }
        break;
    case 3:
        if (choice == 3)
        {
            campusVotes[2] = votes;
            numOfVotes += votes;
        }
        break;
    case 4:
        if (choice == 4)
        {
            campusVotes[3] = votes;
            numOfVotes += votes;
        }
        break;
    }
}
int CandidateType::getTotalVotes() const
{
    return numOfVotes;
}
int CandidateType::getVotesByCampus(int choice) const
{
    return campusVotes[choice - 1];
}
void CandidateType::printCandidateInfo() const
{
    PersonType::printSSN();
    cout << " - "; 
    PersonType::printName();
}
void CandidateType::printCandidateTotalVotes() const {
    PersonType::printName();
    cout << endl << "Total Votes (all campuses): " << numOfVotes;
}
void CandidateType::printCandidateDivisionVotes(int division) const {
    if (division < NUM_OF_CAMPUSES) {
        PersonType::printName();
        cout << endl << "Campus " << division << " total votes:" << campusVotes[division];
    }
    else
        cout << "Not a valid division for this election." << endl;
}
CandidateType::~CandidateType()
{

}
