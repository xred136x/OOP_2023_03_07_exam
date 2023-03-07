#include<vector>
#include<iostream>
#include<algorithm>
#include"A.h"
#include"B.h" 

bool pred(int a, int b) {
	return a > b;
}

int main() {

	std::vector<int> vec{3, 5, 6, 3, 8, 1};
	for (const auto el : vec) {
		std::cout << el << ' ';
	}
	std::cout << '\n';

	std::sort(vec.begin(), vec.end(), [](int a, int b) {
		return a > b;
		});

	const auto x = [](int a) {
		std::cout << a << '\n';
	};
	x(4);

	for (const auto el : vec) {
		std::cout << el << ' ';
	}
	std::cout << '\n';


	// callback
	// C++ QT
	// JS React 
}