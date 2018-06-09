#include <iostream>
#include "Medico.h"
#include "Ginecologista.h"


Ginecologista::Ginecologista(){}

Ginecologista::Ginecologista(string n, float a, float p, string e){

	setNome(n);
	setAltura(a);
	setPeso(p);
	setEspecialidade(e);


}

void Ginecologista::setEspecialidade(string e){

	especialidade = e;

}
string Ginecologista::getEspecialidade(){
	
	return especialidade;

}
string Ginecologista::realizaCirurgia(){
	return "Metodos cirurgicos: Realiza cirurgias e lida diretamente com a saúde do aparelho reprodutor feminino (vagina, útero ovários) e mamas";

}
