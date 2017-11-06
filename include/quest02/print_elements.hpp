#ifndef _PRINT_ELEMENTS_HPP_
#define _PRINT_ELEMENTS_HPP_
/**
* @file     print_elements.hpp
* @brief    Função que permite a exibição dos elementos de um vector separados por um char lido do usúario.
* @author   Israel Medeiros Fontes
* @since    04/11/2017
* @date     06/11/2017
*/
#include <iostream>
#include <set>
#include <algorithm>

using std::cout;
using std::endl;

/**
* @brief Classe Print que implementa o Functor para permitir utilização do for_each passando uma função parametrizada que irá manipular cada elemento do vector, imprimindo-o com o separador.
*/
class Print
{
	char separator; /**< Separador de elementos. */ 
	public:
		/// Construtor parametrizado passando o separador.
		Print(char _separator):separator(_separator){} 
		/// Sobrecarga do operador ().
		void operator()(const int value) const { cout << value << separator; }
};

/**
* Função que realiza a impressão dos elementos com o separador.
* @param collection Coleção de elementos.
* @param Label da Coleção.
* @param separator Separador de elementos.
*/
template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator=' '){
	cout << label;
	for_each(collection.begin(), --collection.end(), Print(separator));
	cout << *collection.end() << endl;
}
#endif