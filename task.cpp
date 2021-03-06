#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

int main(int argc, char *argv[]) {
	if (argc != 2)
		std::cerr << "Type one natural number > 0.\n";
	else {
		int index = 0;
		bool cont = true;
		for(unsigned int i = 0; i < strlen(argv[1]) && cont; ++i) {
			if (argv[1][i] < '0' || argv[1][i] > '9') {
				std::cerr << "Use only digits to type the natural number.\n";
				cont = false;
				++index;
			}
		}
		if (cont) {
			if (strlen(argv[1]) > 8)
				std::cerr << "Type number less than 10^9 .\n";
			else {
				int n = atoi(argv[1]);
				for (int i = 1; i <= n; ++i) {
					std::cout << i << '\n'; 
				}
			}
		}
	}
	return 0;
}
