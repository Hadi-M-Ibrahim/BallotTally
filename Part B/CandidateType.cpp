#include "CandidateType.h"
#include <iostream>
#include <string>

using namespace std;

CandidateType::CandidateType()
{
    int numOfVotes = 0;
    int campusVotes[NUM_OF_CAMPUSES] = {0};
}
void CandidateType::updateVotesByCampus(int numOfVotes, int choice)
{
    switch(choice)
    {
        case 1 :
        if(choice == 1)
        {
            campusVotes[0] = numOfVotes;
        }
        break;
        case 2 :
        if(choice == 2)
        {
            campusVotes[1] = numOfVotes;
        }
        break;
        case 3 :
        if(choice == 3)
        {
            campusVotes[2] = numOfVotes;
        }
        break;
        case 4 :
        if(choice == 4)
        {
            campusVotes[3] = numOfVotes;
        }
        break;
    }
}
int CandidateType::getTotalVotes(int campusVotes[], int NUM_OF_CAMPUS)
{
    int totalVotes = 0;

    for(int i = 0; i < NUM_OF_CAMPUS; i++)
    {
        totalVotes += campusVotes[i];
    }
    return totalVotes;
}
void CandidateType::getVotesByCampus(int campusVotes[], int NUM_OF_CAMPUS)
{
    
    for (int i = 0; i < NUM_OF_CAMPUS; i++)
    {
        cout << "Campus " << (i+1) << " number of votes: " << campusVotes[i] << endl;
    }
}
void CandidateType::printCandidateInfo()
{
    cout << PersonType::printSSN << " - " << PersonType::printName;
}
CandidateType::~CandidateType()
{

}