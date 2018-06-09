#include <iostream>
#include "Medico.h"
#include "Otorrino.h"


Otorrino::Otorrino(){}

Otorrino::Otorrino(string n, float a, float p, string e){

	setNome(n);
	setAltura(a);
	setPeso(p);
	setEspecialidade(e);


}

void Otorrino::setEspecialidade(string e){

	especialidade = e;

}
string Otorrino::getEspecialidade(){
	
	return especialidade;

}
string Otorrino::realizaCirurgia(){
	return "Metodos cirurgicos: Trata das doenças dos ouvidos, nariz e garganta, o tratamento pode ser tanto cirúrgico quanto clínico dependendo da doença";

}


