#ifndef CandidateList_H
#define CandidateList_H

#include "Node.h"
#include "../Part A/PersonType.h"

class CandidateList {
    private:
        Node* first;
        Node* last; 
        int count; 

    public:
        CandidateList();
        void addCandidate(const CandidateType& NewCandiate); 
        int getWinner() const;
        bool searchCandidate(const int CandidateSSN) const; 
        void printCandidteName(const int CandidateSSN) const; 
        void printAllCandidates() const; 
        void printCandidateCampusVotes(const int CandidateSSN, const int division) const; 
        void printCandidateTotalVotes(const int SSN) const; 
        void destroyList();
        ~CandidateList();

};




#endif

