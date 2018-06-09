#include <iostream>
#include "Trabalhador.h"
#include <string>

Trabalhador::Trabalhador(){}

Trabalhador::Trabalhador(string n, float sal){
	setNome(n);
	setSalario(sal);
}

void Trabalhador::setNome(string n){
	nome = n;
}

string Trabalhador::getNome(){
	return nome;
}

void Trabalhador::setSalario(float sal){
	if(sal < 0){
		cout << "ERRO DE SALARIO" << endl; 
	}else{
		salario = sal;	
	}
}

float Trabalhador::getSalario(){
	return salario;
}

float calcularPagamento(int){
}
