#pragmaa once
#include <iostream>
#include <string>

using namespace std;

class Personagem {
	string nome;
	int vida;
	int ataque;
	
	Personagem(string n, int v, int a)
		: nome(n), vida(v), ataque(a) {}
		
	void apresentar(){
		cout << "Personagem: " << nome << endl;
		cout << "Vida: " << vida << endl;
		cout << "Ataque: " << ataque << endl;
	}

};
