#include <iostream>

int main() {
	int vet[2][2] = { {2, 4}, {10, 22} };
	int *ptr = &vet[0][0];

	std::cout << *(ptr + 2) << std::endl;

	system("pause");
	return 0;
}