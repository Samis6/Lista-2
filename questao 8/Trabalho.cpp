#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"
#include <string>

using namespace std;

int main(){
	string nome;
	float salario;
	int horas;
	
	Trabalhador T(nome, salario);
	TrabalhadorPorHora T1(nome, salario);
	
	cout << "Nome: " << endl;
	cin >> nome;
	cout << "Salario: " << endl;
	cin >> salario;
	cout << "Horas: " << endl;
	cin >> horas;

	cout <<	T.calcularPagamento(horas) << endl;

	return 0;
}
