#include <iostream>
#include <string>
#include "CandidateList.h"



using namespace std;

CandidateList::CandidateList()
{
   	first = nullptr;
    last = nullptr;
    int count = 0;
}

void CandidateList :: addCandidate(const CandidateType& NewCandiate)
{
    Node* NewNode = new Node();
    NewNode->setCandidate(NewCandiate);

    if (first == nullptr) 
    {
        first = NewNode;
        last = NewNode;
    }
    else
    {
        last -> setLink(NewNode);
        last = NewNode;
    }

    ++count;
}

int CandidateList::getWinner() const {
	Node* current = first;
	Node* next = current->getLink();
	if (count == 0) {
		cout << "=> The list is empty." << endl;
		return 0;
	}
	else {
		while (next != nullptr) {
			if (current->getCandidate().getTotalVotes() >= next->getCandidate().getTotalVotes()) 
            {
				next = next->getLink();
			}
			else
				current = current->getLink();
		}
		return current->getCandidate().getSSN();
	}
}

bool CandidateList::searchCandidate(const int SSN) const {
	if (count == 0) {
		std::cout << "=> The list is empty." << std::endl;
		return false;
	}
	else {
		Node* current = first;
		bool track = false;
		while (track != true) {
			if (current != nullptr) {
				if (current->getCandidate().getSSN() == SSN) {
					track = true;
					return track;
				}
				else
					current = current->getLink();
			}
			else {
				std::cout << "SSN Not in list." << std::endl;
				return false;
			}
				
		}
	}
	return false;
}

void CandidateList::printCandidteName(const int SSN) const{
	if (count == 0) {
		std::cout << "=> The list is empty." << std::endl;
	}
	else {
		Node* current = first;
		bool track = false;
		while (track != true) {
			if (current != nullptr) {
				if (current->getCandidate().getSSN() == SSN) {
					track = true;
					current->getCandidate().printName();
				}
				else
					current = current->getLink();
			}
			else {
				std::cout << "SSN Not in list." << std::endl;
				track = true;
			}

		}
	}
		
}
void CandidateList::printAllCandidates() const {
	Node* current = first;
	if (count == 0)
		std::cout << "=> The list is empty." << std::endl;
	else {
		for (int i = 0; i < count; i++) {
			current->getCandidate().printCandidateInfo();
			current = current->getLink();
		}
	}
}
void CandidateList::printCandidateCampusVotes(const int SSN,const int campus) const {
	if (count == 0) {
		std::cout << "=> The list is empty." << std::endl;
	}
	else {
		Node* current = first;
		bool track = false;
		while (track != true) {
			if (current != NULL) {
				if (current->getCandidate().getSSN() == SSN) {
					track = true;
					std::cout << current->getCandidate().getVotesByCampus(campus) << std::endl;
				}
				else
					current = current->getLink();
			}
			else
				track = true;
				
		}
	}
}
void CandidateList::printCandidateTotalVotes(const int SSN) const {
	if (count == 0) {
		std::cout << "=> The list is empty." << std::endl;
	}
	else {
		Node* current = first;
		bool track = false;
		while (track != true) {
			if (current != NULL) 
                {
				if (current->getCandidate().getSSN() == SSN) 
                {
					track = true;
					current->getCandidate().printCandidateTotalVotes();
				}
				else
					current = current->getLink();
			}
			else
				track = true;

		}
	}
}
void CandidateList::destroyList() {
	Node* temp = first;
	while(temp != nullptr) {
		first = first->getLink();
		delete temp;
		temp = first;
	}
}

CandidateList::~CandidateList() {
	destroyList();
}