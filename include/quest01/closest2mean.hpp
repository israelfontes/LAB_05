#ifndef _CLOSEST2_HPP_
#define _CLOSEST2_HPP_
/**
* @file     closest2mean.hpp
* @brief    Função que faz a média de todos os elementos contidos numa coleção e retorna o primeiro elemento que tem o valor mais aproximado da média.
* @author   Israel Medeiros Fontes
* @since    04/11/2017
* @date     06/11/2017
*/
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

/**
* @brief Função que faz a média de todos os elementos contidos num vector e retorna o primeiro elemento que tem o valor mais aproximado da média.
* @param first Iterator que aponta para o primeiro elemento da coleção.
* @param last Iterator que aponta para o ultimo elemento da coleção.
* @return Elemento mais próximo da média.
*/
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