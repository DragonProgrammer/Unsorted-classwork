#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;

const int DATA_SIZE = 100;
const int SEARCH_SIZE = 50;
const int DATA_SEED = 11;
const int SEARCH_SEED = 7;
int Rand() // function to return a random
{
	return rand() % 200 + 1; // rreturn a randome in the range of 1-200 (taken from assignment handout)
}
void genRndNums(vector<int>& v, int seed) { //generate random elements in vetor function
	srand(seed); // set seed
	generate(v.begin(), v.end(), Rand); // generate algirith STL, using Rand function above to make elements
}

bool linearSearch(const vector<int>& inputVec, int x) { // linear search function
	return find(inputVec.begin(), inputVec.end(), x) != inputVec.end(); //return true if found
}

bool binarySearch(const vector<int>& inputVec, int x) { // binary search function
	return binary_search(inputVec.begin(), inputVec.end(), x); // return true if found, algirithm STL
}

int search(const vector<int>& inputVec, const vector<int>& searchVec,  //search function taking 
	bool(*p)(const vector<int>&, int)) {  // a search type as argument
	int Suc=0; // set return value to zero
	for (unsigned i = 0; i < searchVec.size(); i++) // loop through search vector to see if item is in input vector
	{
		if (p(inputVec, searchVec[i]) == true)
		{
			Suc++; // increment return value on find
		}
		else {
			Suc = Suc; // no change to return valuw if no found
		}
	}
	return Suc;
}


void sortVector(vector<int>& inputVec) { // sort funtion
	sort(inputVec.begin(), inputVec.end()); // sort algirthm for STL
}

void printStat(int totalSucCnt, int vec_size) { // print function that tells the percentage of successful searches
	cout << "Successful searches: " << ((double)totalSucCnt / (double)vec_size)*100 << "%\n";
}

void print_vec(const vector<int>& vec) {
	unsigned in = 0; //set position
	while (in < vec.size() - 1) { // loop while not at end
		for (int j = 1; j < 11; j++) // loop for 8 times a line
		{
			cout << setw(6) << vec[in]; //Set a width and print element at position
			if (in == vec.size() - 1) // recheck to see if at end of vector
			{
				break;
			}
			in++; // move to next position
		}
		cout << endl; // new line
	}
}


int main() {
	vector<int> inputVec(DATA_SIZE);
	vector<int> searchVec(SEARCH_SIZE);
	genRndNums(inputVec, DATA_SEED);
	genRndNums(searchVec, SEARCH_SEED);

	cout << "----- Data source: " << inputVec.size() << " randomly generated num                                                                                        bers ------" << endl;
	print_vec(inputVec);
	cout << "----- " << searchVec.size() << " random numbers to be searched ----                                                                                        ---" << endl;
	print_vec(searchVec);

	cout << "\nConducting linear search on unsorted data source ..." << endl;
	int linear_search_count = search(inputVec, searchVec, linearSearch);
	printStat(linear_search_count, SEARCH_SIZE);

	cout << "\nConducting binary search on unsorted data source ..." << endl;
	int binary_search_count = search(inputVec, searchVec, binarySearch);
	printStat(binary_search_count, SEARCH_SIZE);

	sortVector(inputVec);

	cout << "\nConducting linear search on sorted data source ..." << endl;
	linear_search_count = search(inputVec, searchVec, linearSearch);
	printStat(linear_search_count, SEARCH_SIZE);

	cout << "\nConducting binary search on sorted data source ..." << endl;
	binary_search_count = search(inputVec, searchVec, binarySearch);
	printStat(binary_search_count, SEARCH_SIZE);
	char m;
	cin >> m;
	return 0;
}

