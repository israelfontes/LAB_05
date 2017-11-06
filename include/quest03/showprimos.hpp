#ifndef _SHOW_PRIMOS_HPP_
#define _SHOW_PRIMOS_HPP_

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

bool _primo(int num, int _num){
	if(_num > 1){
		if(num%_num == 0){
			return false;
		}
		else{
			return _primo(num, _num-1);
		}
	}else{
		return true;
	}
}

bool primo(int num){
	return _primo(num, num-1);
}

void showprimos(int num){
	std::vector<int> numbers;

	for(int i = 1; i <= num; ++i)
		numbers.push_back(i);

	std::cout << "Numeros primos [1-" << num << "]:";
	for(std::vector<int>::iterator it = numbers.begin(); it < numbers.end(); ++it){
		auto i = std::find_if(it, numbers.end(), primo);
		if(i != numbers.end()){
			std::cout << " " << *i;
			numbers.erase(i);
		}
	}
	std::cout << std::endl;
}	
#endif