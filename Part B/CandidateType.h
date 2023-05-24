#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H
#include "PersonType.h"

const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType
{
public:
    CandidateType();
    void updateVotesByCampus(int numOfVotes, int choice);
    int getTotalVotes() const;
    int getVotesByCampus(int choice) const;
    void printCandidateInfo() const;
    ~CandidateType();

private:
    int numOfVotes = 0;
    int campusVotes[NUM_OF_CAMPUSES] = { 0 };
};



#endif
