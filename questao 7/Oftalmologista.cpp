#include <iostream>
#include "Medico.h"
#include "Oftalmologista.h"


Oftalmologista::Oftalmologista(){}

Oftalmologista::Oftalmologista (string n, float a, float p, string e){

	setNome(n);
	setAltura(a);
	setPeso(p);
	setEspecialidade(e);


}

void Oftalmologista::setEspecialidade(string e){

	especialidade = e;

}
string Oftalmologista::getEspecialidade(){
	
	return especialidade;

}
string Oftalmologista::realizaCirurgia(){
	return "Metodos cirurgicos: realiza cirurgias para correções de distúrbios de visão";

}
