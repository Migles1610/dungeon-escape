#pragma once
#include <iostream>
#include <string>

using namespace std;

class Personagem {
	
public:
	string nome;
	int vida;
	int ataque;
	
	Personagem(string n, int v, int a)
		: nome(n), vida(v), ataque(a) {}
		
	void apresentar(){
		cout << "Personagem: " << nome   << endl;
		cout << "Vida: "       << vida   << endl;
		cout << "Ataque: "     << ataque << endl;
	}

};

class Inimigo : public Personagem {
	public:
		string tipo;
		
		Inimigo(string n, int v, int a, string t)
			: Personagem(n, v, a), tipo(t) {}
		
		void apresentar() {
			cout << "[INIMIGO] "  << nome
				 << " | Tipo: "   << tipo
				 << " | Vida: "   << vida
				 << " | Ataque: " << ataque << endl;
		}
};
