#include <iostream>
#include <stdlib.h>
#include <string>

int main(int argc, char *argv[]) {
	if (argc == 1)
		std::cerr << "Type a natural number.\n";
	else {
		int n = atoi(argv[1]);
		std::cout << n << '\n';
		if (n == 0 && *argv[1] != '0')
			std::cerr << "Use only digits to type the natural number.\n";
		else if (n < 0)
			std::cerr << "The negative number is unacceptable.\n";
		else
			for (int i = 1; i <= n; ++i)
				std::cout << i << '\n';
	}
	return 0;
}
