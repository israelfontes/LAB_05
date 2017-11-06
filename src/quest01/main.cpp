#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

#include "closest2mean.hpp"
using namespace std;


int main(void) {
	
	vector<int> v { 1, 2, 3, 30, 40, 50 };
	auto result = closest2mean(v.begin(), v.end());
	cout << (*result) << endl;
	return 0;

}