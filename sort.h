#pragma once
#ifndef DELANGEL_SORT_H
#define DELANGEL_SORT_H

#include <string>
#include <vector>
#include <iostream>

namespace sorting {
	struct SortByLength {
		bool operator()(const std::string& a, const std::string& b) const;
	};

	bool sortDescending(int a, int b);

	template <typename T>
	void displayVector(const std:: vector<T>& vect){
		for (const T& element : vect) {
			std::cout << element << " ";
		}
		std::cout << std::endl;
	}
}

#endif
