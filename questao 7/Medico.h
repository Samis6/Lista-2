#ifndef MEDICO_H
#define MEDICO_H
#include "string"

using namespace std;

class Medico{
private:
	string nome;
	float altura = 0.0; 
	float peso = 0.0;
public:
	Medico();
	Medico(string, float, float);

	void setNome(string);
	string getNome();

	void setAltura(float);
	float getAltura();

	void setPeso(float);
	float getPeso();
	

	
	
};

#endif
