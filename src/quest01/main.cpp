/**
* @file     main.cpp
* @brief    Cria um vector e chama a função closestmean a partir desse vector.
* @author   Israel Medeiros Fontes
* @since    04/11/2017
* @date     06/11/2017
*/
#include <iostream>
#include <vector>
#include <iterator>
#include "closest2mean.hpp"

using namespace std;

int main(void) {
	
	vector<int> v { 1, 2, 3, 30, 40, 50 };
	auto result = closest2mean(v.begin(), v.end());
	cout << (*result) << endl;
	return 0;

}