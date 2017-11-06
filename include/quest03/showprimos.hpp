#ifndef _SHOW_PRIMOS_HPP_
#define _SHOW_PRIMOS_HPP_

/**
* @file     showprimos.hpp
* @brief    Conjunto de funções que permitem a seleção e impressão dos números impares de uma lista de elementos.
* @author   Israel Medeiros Fontes
* @since    05/11/2017
* @date     06/11/2017
*/
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

/**
* Função recursiva que verifica se um número é primo ou não.
* @param num Número a ser verificado.
* @param _num Possível fator do número.
* @return o valor booleano da verificação.
*/ 
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
/// Função que chama a função recurisva com os parametros necessarios.
bool primo(int num){
	return _primo(num, num-1);
}

/**
* Função que lê uma quantidade de elementos, cria uma vector crescente com a quantidade de elementos lida e imprime apenas os elementos impares desse vector.
* @param num Quantidade de elementos.
*/
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