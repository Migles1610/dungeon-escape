#include <iostream>
#include "personagem.h"
	
int main() {
	Personagem heroi("Herói", 100, 10);
	heroi.apresentar();
	
	Inimigo goblin("Goblin", 30, 5, "Goblin");
	goblin.apresentar();
	
	return 0;
}
