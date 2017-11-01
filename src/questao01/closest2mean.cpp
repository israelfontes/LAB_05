#include <algorithm>
#include <iostream>
#include "closest2mean.hpp"

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last){
	int distance = std::distance(first, last);
	double media;

	for(InputIterator _it = first; _it < last; ++_it)
		media += *_it;

	media = media/distance;

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