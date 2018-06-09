#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include <string>
#include "Trabalhador.h"

using namespace std;

class TrabalhadorPorHora : public Trabalhador{
private:
	float pagamento;
	float salarioHora; //Quanto o trabalhador ganha por hora;
public:
	TrabalhadorPorHora();
	TrabalhadorPorHora(string, float);
	
	void setSalarioHora(float);
	float getSalarioHora();
	
	float calcularPagamento(int);
};

#endif
