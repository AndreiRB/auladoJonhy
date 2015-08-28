#include <iostream>

int main(){
	int vet[2][2] = { {10, 11}, {12, 22 } };
	int *ptr = vet[1];
	std::cout << *(ptr + 1) << std::endl;
	system("pause");
	return 0;
}