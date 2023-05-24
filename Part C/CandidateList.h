#ifndef CandidateList_H
#define CandidateList_H

#include "Node.h"
#include "CandidateType.h"

class CandidateList : public CandidateType {
    private:
        Node* first;
        Node* last; 
        static int count; 

    public:
        CandidateList();
        void addCandidate(CandidateType NewCandiate); 
        int getWinner() const;
        bool searchCandidate(int CandidateSSN) const; 
        void printCandidteName(int CandidateSSN) const; 
        void printAllCandidates() const; 
        void printCandidateCampusVotes(int CandidateSSN,int division) const; 
        void printCandidateTotalVotes() const; 
        void printCandidateDivisionVotes () const; 
        ~CandidateList();





};




#endif

