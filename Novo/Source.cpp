#include <iostream>
#define MAX 5

int main() {
	int *arrptr[MAX];
	int numeros[MAX] = { 11, 12, 13, 16, 18 };

	for (int i = 0, inversor = MAX - 1; i < MAX; i++, inversor--) {
		*(arrptr + i) = numeros + inversor;
	}
	for (int i = 0; i < MAX; i++) {
		std::cout << *(*(arrptr + i)) << std::endl;
	}
	system("pause");
	return 0;
}