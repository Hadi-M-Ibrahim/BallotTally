#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H
#include "PersonType.cpp"


const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType
{
    public:
    CandidateType();
    void updateVotesByCampus(int, int);
    int getTotalVotes() const;
    int getVotesByCampus(int) const;
    void printCandidateInfo() const;
    ~CandidateType();

    private:
    int numOfVotes;
    int campusVotes[NUM_OF_CAMPUSES];
};



#endif