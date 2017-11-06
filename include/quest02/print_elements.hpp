#ifndef _PRINT_ELEMENTS_HPP_
#define _PRINT_ELEMENTS_HPP_

#include <iostream>
#include <set>
#include <algorithm>

using std::cout;
using std::endl;

class Print
{
	char separator;
	public:
		Print(char _separator):separator(_separator){}
		void operator()(const int value) const { cout << value << separator; }
};

template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator=' '){
	cout << label;
	for_each(collection.begin(), --collection.end(), Print(separator));
	cout << *collection.end() << endl;
}
#endif