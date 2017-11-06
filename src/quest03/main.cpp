
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