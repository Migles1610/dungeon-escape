#pragma once
#include <iostream>
#include <string>

class Personagem {
	
public:
	std::string nome;
	int vida;
	int ataque;
	
	Personagem(std::string n, int v, int a)
		: nome(n), vida(v), ataque(a) {}
		
	void apresentar(){
		std::cout << "Personagem: " << nome << std::endl;
		std::cout << "Vida: " << vida << std::endl;
		std::cout << "Ataque: " << ataque << std::endl;
	}

};
