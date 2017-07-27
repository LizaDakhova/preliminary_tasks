#include <iostream>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if (argc == 1)
		std::cerr << "Type a natural number.\n";
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
			int n = atoi(argv[1]);
			for (int i = 1; i <= n; ++i)
				std::cout << i << '\n';
		}
	}
	return 0;
}
