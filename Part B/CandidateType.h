#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H
#include "../Part A/PersonType.h"

const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType
{
public:
    CandidateType();
    void updateVotesByCampus(int choice, int votes);
    int getTotalVotes() const;
    int getVotesByCampus(int choice) const;
    void printCandidateInfo() const;
    void printCandidateTotalVotes() const;
    void printCandidateDivisionVotes(int division) const;
    ~CandidateType();

private:
    int numOfVotes;
    int campusVotes[NUM_OF_CAMPUSES] = { 0 };
};



#endif
