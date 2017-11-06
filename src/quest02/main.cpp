/**
* @file     main.cpp
* @brief    Cria um set de inteiros e chama print_elements a partir do set criado.
* @author   Israel Medeiros Fontes
* @since    04/11/2017
* @date     06/11/2017
*/
#include <set>
#include "print_elements.hpp"

using std::set;

int main() {
	set<int> numeros;
	numeros.insert(3);
 	numeros.insert(1);
 	numeros.insert(4);
	numeros.insert(1);
	numeros.insert(2);
 	numeros.insert(5);

	print_elements(numeros, "Set: ");
	print_elements(numeros, "CSV Set: ", ';');
	return 0;
}