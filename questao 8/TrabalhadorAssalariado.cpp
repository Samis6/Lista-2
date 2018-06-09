#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(){}

void TrabalhadorAssalariado::setSalarioHr(float s_hr){
	salarioHr = s_hr;
}

float TrabalhadorAssalariado::getSalarioHr(){
	return salarioHr;
}

void TrabalhadorAssalariado::calcularPagamento(){
	pagamento = ((salarioHr + (salarioHr/2)) * 40);
}
