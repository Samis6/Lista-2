#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador{
private:
	float pagamento;
	float salarioHr;
public:
	TrabalhadorAssalariado();
	
	void setSalarioHr(float);
	float getSalarioHr();
	
	virtual void calcularPagamento();
	
};

#endif
