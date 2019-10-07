#include <algorithm>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

const int DATA_SIZE = 200;
const int DATA_RANGE = 200;
const int DATA_SEED = 9;
const int SEARCH_SEED = 17;


int linear_search(const vector<int>& inputVec, const int x, int& comparisons) {
	vector<int>::const_iterator iter = inputVec.begin();
	for (int i = 0; i < inputVec.size() + 1; i++) {
		if (*iter == x) {
			comparisons = i + 1;
			return i;
		}
		else {
			iter++;
			if (iter == inputVec.end()) {
				comparisons = i + 1;
				return -1;
			}
		}
	}
}

int binary_search(const vector<int>& inputVec, const int x, int& comparisons) {
	int S = inputVec.size();
	int B = 0, E = S - 1;
	int M = (B + E) / 2;
	comparisons = 1;
	while (inputVec[M] != x) {
		if (x > M) { comparisons++; B = M + 1; }
		else { comparisons++; E = M - 1; }
		M = (B + E) / 2;
	}
}


void print_vec(const vector<int>& vec) {
	vector<int>::const_iterator it = vec.begin();
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 1; j < 9; j++)
		{
			setw(4);
			cout << vec[i];
		}
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

	return 0;

}