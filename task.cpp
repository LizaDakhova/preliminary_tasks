#include <iostream>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Edgar, you forgot to type the number)\n";
		return 1;
	}
	for (int i = 1; i <= *(argv[1]) - '0'; ++i) {
		std::cout << i << std::endl;
	}
	return 0;
}
