#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include <string>
#include "Medico.h"


using namespace std;

class Oftalmologista : public Medico{
	private:
	string especialidade;	

	public:
	Oftalmologista();
	Oftalmologista(string, float, float, string);
	void setEspecialidade(string);
	string getEspecialidade();

	string realizaCirurgia();


};
#endif 
