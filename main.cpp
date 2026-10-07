
#include <iostream>
#include <algorithm>
#include "sort.h"

using namespace std;
using namespace sorting;

int main()
{
	cout << "SORT DEMO\n\n";

	//start with sorting intergers
	vector<int> numbers {5, 12, 53, 33, 27};

	cout << "Orginial Numbers: ";
	displayVector(numbers); // type independent

	// sort default
	sort(numbers.begin(), numbers.end());
	cout << "Sorted ASC: ";
	displayVector(numbers);

	// custom sorting behavior with normal function
	sort(numbers.begin(), numbers.end(), sortDescending);
	cout << "Sorted DESC: ";
	displayVector(numbers);

	// next sort strings
	vector<string> words {"apple","kiwi","banana","pear","grape"};

	cout << "Original Wods";
	displayVector(words);

	// default sort ASC
	sort(words.begin(), words.end());
	cout << "Sorted Alphabetical: ";
	displayVector(words);

	// sort words by length using functor
	sort(words.begin(), words.end(), SortByLength());
	cout << "Sorted by length: ";
	displayVector(words);
	//sort DESC with lambda
	sort(words.begin(), words.end(),
		[](const string& a, const string& b){
			return a > b; // large string alphabetically comes first
		}
	);
	cout << "Sorted: ";
	displayVector(words);

	//vector of pairs
	vector<pair<string, double>> fruits {
		{"apple", 1.29},
		{"banana", .99},
		{"pear", 1.49},
		{"pear", .99},
		{"kiwi", 2.00}
	};

	cout << "Orginal Fruit Paris: ";
	for (auto& f : fruits){
		cout << "(" << f.first << ", " << f.second << ")\n";
		
	}

	// sort by second value
	sort(fruits.begin(), fruits.end(),
		[](auto& a, auto& b){
			return a.second < b.second;
		}
	);

	cout <<"Sorted by second value: ";
	for (auto& f : fruits){
		cout << "(" << f.first << ", " <<  f.second << ") ";
	}

 
	return 0;
	
}









