#ifndef _CLOSEST2_HPP_
#define _CLOSEST2_HPP_

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last){
	int distance = std::distance(first, last);
	double media = accumulate(first, last,0)/distance;

	InputIterator it = find(first, last, (int)media);
	if(it != last)
		return it;

	double temp = media;
	for(InputIterator _it = first; _it < last; ++_it){
		double module;
		if((media - *_it) < 0){
			module = -(media - *_it);
		}else{
			module = media - *_it;
		}

		if(module < temp){
			temp = module;
			it = _it;
		}
	}
	return it;
}

#endif