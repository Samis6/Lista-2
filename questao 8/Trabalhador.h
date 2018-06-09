#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

using namespace std;

class Trabalhador{
private:
	string nome;
	float salario;
public:
	Trabalhador();
	Trabalhador(string, float);

	void setNome(string);
	string getNome();

	void setSalario(float);
	float getSalario();

	virtual float calcularPagamento(int);	
};

#endif
