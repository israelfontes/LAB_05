/**
* @file     main.cpp
* @brief    Lê um número inteiro e chama a função showprimos passando o número lido por parametro.
* @author   Israel Medeiros Fontes
* @since    04/11/2017
* @date     06/11/2017
*/
#include <iostream>
#include "showprimos.hpp"

int main(int argc, char **argv){

	int num = atoi(argv[1]);
	if(num >= 0){
		showprimos(num);
	}else{
		std::cout << "Apenas números inteiros positivos." << std::endl;	
	}
	
	return 0;
}