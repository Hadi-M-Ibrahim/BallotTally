
# To do: 

1) ~~Place Candidate_data.txt in its own resource folder (Their are issues with #including files that are in folders ask prof for help with this)~~
2) ~~Figure out a consitant default nampsace (Do we use "using namespace std;" or not)~~
3) Fix menu option 3 and 4 as it is printing the candidates name twice instead of once 
4) Ask prof about option 5 "5: Print final results" it only prints the names and ssns but not also total votes wich it needs to do. Ask wether we should change the driver to somehow print each candiates votes, change part c's "printAllCandidates()" to also call printCandidateTotalVotes() along with printCandidateInfo() (wich it currently calls) to print out the total votes by defualt, or change part b's printCandidateInfo() to include the votes for each candiate as part of the info by defualt.
5) ~~Fix code to comply with important notes (see below)~~
6) Make a UML for Part C 
8) Complete the google slides
9) Fix issue with #including files in nested folders 
10) ~~Add const modifier for parameters in Part c ("CandidateList.cpp") when/if needed~~

# Important Notes
Prof said always place the import for custom header files last. ie.

#include \<iostream\>

#include "Lab 9.h"

standard libraries are to come first

Do not place "using namespace std;" in .h files only in .cpp (As of 6:11 am all code has been update to comply with this standard")
