#include <iostream>
#include "Medico.h"
#include "Cirurgiao.h"

Cirurgiao::Cirurgiao(){}

Cirurgiao::Cirurgiao(string n, float a, float p, string e){
	setNome(n);
	setAltura(a);
	setPeso(p);
	setEspecialidade(e);
}

void Cirurgiao::setEspecialidade(string e){
	
	especialidade = e;
}

string Cirurgiao::getEspecialidade(){
	return especialidade;
}

string Cirurgiao::realizaCirurgia(){
	return "Metodo cirurgico: Realiza cirurgias em geral.";
}

