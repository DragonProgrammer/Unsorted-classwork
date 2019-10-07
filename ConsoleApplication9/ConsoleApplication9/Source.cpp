#include <algorithm>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

const int DATA_SIZE = 200;
const int DATA_RANGE = 200;
const int DATA_SEED = 9;
const int SEARCH_SEED = 17;


int linear_search(const vector<int>& inputVec, const int x, int& comparisons) { // search element by element for the target
	vector<int>::const_iterator iter = inputVec.begin();
	for (unsigned i = 0; i < inputVec.size() + 1; i++) { // start at zero and go through
		if (*iter == x) { //found
			comparisons = i + 1; //set comparison to position + one for first go throu
			return i;
		}
		else {
			iter++; // step to nex element
			if (iter == inputVec.end()) { // check for end and fail
				comparisons = i + 1; //set comparison to position + one for first go throu
				return -1;
			}
		}
	}
	return 0;
}

int binary_search(const vector<int>& inputVec, const int x, int& comparisons) {
	int S = inputVec.size(); //establish the number of elements
	int B = 0, E = S - 1; // assign value to start and end
	int M = (B + E) / 2; //establish middle
	comparisons = 1; // set comparisons to a number
	while (inputVec[M] != x) { // run loop while middle is not target
	if (B>E) { return -1; } // if begining becomes greater then end, fail search
		if (x > inputVec.at(M)) { comparisons++; B = M+1; } // if target is biger then middle element take top half, increment coparison
		else if (x < inputVec.at(M)) { comparisons++; E = M-1; } // if target is smaller then middle element take botom half, increment comparison
		else if (x == inputVec.at(M)) { return M; } // if target is middle element return position
	
		M = (B + E) / 2; //reset middle
		}
	
	return M;
}


void print_vec(const vector<int>& vec) { 
	unsigned in = 0; //set position
	while (in < vec.size() - 1) { // loop while not at end
		for (int j = 1; j < 9; j++) // loop for 8 times a line
		{
			cout << setw(4) << vec[in]; //Set a width and print element at position
			if (in == vec.size() - 1) // recheck to see if at end of vector
			{
				break;
			}
			in++; // move to next position
		}
		cout << endl; // new line
	}
}


void average_comparisons(const vector<int>& inputVec, const vector<int>& searchVec, int(*search)(const vector<int>&, const int, int&)) {
	int i, comparison = 0, sum = 0, found = 0;
	int res = 0;
	for (i = 0; i < (int)searchVec.size(); i++) {
		res = search(inputVec, searchVec[i], comparison);
		sum += comparison;
		if (res >= 0)
			found++;
	}
	cout << found << " numbers are found. The average number of comparisons in each search: " << (double)sum / (double)searchVec.size() << endl << endl;
}

int random_number() {
	return rand() % DATA_RANGE + 1;
}


int main() {

	// -------- create unique random numbers ------------------//
	vector<int> inputVec(DATA_SIZE);
	srand(DATA_SEED);
	generate(inputVec.begin(), inputVec.end(), random_number);
	sort(inputVec.begin(), inputVec.end());
	vector<int>::iterator it = unique(inputVec.begin(), inputVec.end());
	inputVec.resize(it - inputVec.begin());
	random_shuffle(inputVec.begin(), inputVec.end());

	cout << "------ Data source: " << inputVec.size() << " unique random numbers                                                                                         ------" << endl;
	print_vec(inputVec);
	cout << endl;

	// -------- create random numbers to be searched ---------//
	vector<int> searchVec(DATA_SIZE / 2);
	srand(SEARCH_SEED);
	generate(searchVec.begin(), searchVec.end(), random_number);

	cout << "------ " << searchVec.size() << " random numbers to be searched: ------" << endl;
	print_vec(searchVec);
	cout << endl;

	cout << "Linear search: ";
	average_comparisons(inputVec, searchVec, linear_search);
	cout << "Binary search: ";
	average_comparisons(inputVec, searchVec, binary_search);

	sort(inputVec.begin(), inputVec.end());
	cout << "------- numbers in data source are now sorted ---------" << endl << endl;
	cout << "Linear search: ";
	average_comparisons(inputVec, searchVec, linear_search);
	cout << "Binary search: ";
	average_comparisons(inputVec, searchVec, binary_search);

	char m;
	cin >> m;
	return 0;

}
