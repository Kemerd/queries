//You are given q queries. Each query is of the form two integers described below:
//
//- 1,x : Insert x into your data structure,
//- 2,y : Delete one occurence of y from your data structure, if present.
//- 3,z : Check if any integer is present whose frequency is exactly z. If yes, print 1 else 0.
//
//The queries are given in the form of the 2-D array queries the size q where queries[i][0] contains the operation,
//and queries[i][1] contains the data element. 
//
// Friend sent me this from one of his Java certification courses. Thought it was interesting, decided to code it up in C++. Experiment with STD. 

#include "pch.h"
#include <iostream>
#include "vector"

// Include STD.
using namespace std;

// Example queries.
int queries[8][2] = {
	{1,1},
	{2,2},
	{3,2},
	{1,1},
	{1,1},
	{2,1},
	{1,2},
	{3,2}
};


int main()
{
	// Initilizae our array.
	vector<int> array;
	int iCount = 0;

	// Loop through our query.
	for (int* n : queries) {

		// Different cases for each value.
		switch (n[0]) {

			// Insert x into our datas structure.
			case 1:
				array.push_back(n[1]);

			// Delete a single occurance of y from our structure, if present.
			case 2:
				for (int i = 0; i <= ( array.size() - 1 ); i++) {
					// We don't have to count. Just delete the first one we encounter.
					if (array[i] == n[1]) {
						array.erase(array.begin()+i);
						break;
					}
				}

			// Check if any integer is present whose frequency is z. 
			case 3:
				for (int i = 0; i <= (array.size() - 1); i++) {
					if (array[i] == n[1]) {
						iCount++;
					}
				}
				
				// If our count is equal to the provided number, print 1.
				if (iCount = n[1]) {
					cout << '1';
				}
				else {
					cout << '0';
				}

				// Reset our value.
				iCount = 0;

		}

	}
}

