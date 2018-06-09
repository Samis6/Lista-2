#include <iostream>
#include "Medico.h"

Medico::Medico(){}

Medico::Medico(string n, float a, float p){
	setNome(n);
	setAltura(a);
	setPeso(p);
	
}

void Medico::setNome(string n){
	nome = n;
}

string Medico::getNome(){
	return nome;
}

void Medico::setAltura(float a){
	if(a < 0.0){
		cout << "altura incorreta" << endl;
	}else{
		altura = a;
	}
}

float Medico::getAltura(){
	return altura;
}

void Medico::setPeso(float p){
	if(p < 0.0){
		cout << "peso incorreto" << endl;
	}else{
		peso = p;
	}
}

float Medico::getPeso(){
	return peso;
}









