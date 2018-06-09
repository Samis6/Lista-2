#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include <string>


TrabalhadorPorHora::TrabalhadorPorHora(){}

TrabalhadorPorHora::TrabalhadorPorHora(string n, float s){
	setNome(n);
	setSalarioHora(s);
	pagamento = 0;
}

void TrabalhadorPorHora::setSalarioHora(float salH){
	if(salH < 0){
		cout << "ERRO!" << endl;	
	}else{
		salarioHora = salH;
	}
}

float TrabalhadorPorHora::getSalarioHora(){
	return salarioHora;
}

float TrabalhadorPorHora::calcularPagamento(int horas){
	if(horas <= 0){
		cout << "ERRO" << endl;
	}else if(horas > 0 && horas <= 40){
			pagamento = salarioHora * horas;
		}else if(horas > 40){
				pagamento = horas * (salarioHora + (salarioHora/2));
			} 
}
