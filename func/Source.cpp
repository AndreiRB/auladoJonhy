#include <iostream>

struct jogador{
	int x, y, vida;
};

void AplicarDano(jogador *player, int dano) {
	player -> vida -= dano;
}

int main() {
	jogador p1;
	p1.x = 10;
	p1.y = 20;
	p1.vida = 120;
	AplicarDano(&p1, 12);
	std::cout << "vida : " << p1.vida << std::endl;
	//ola mundo
	system("pause");
}