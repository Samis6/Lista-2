#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include <string>
#include "Medico.h"


using namespace std;

class Ginecologista : public Medico{
	private:
	string especialidade;	

	public:
	Ginecologista();
	Ginecologista(string, float, float, string);
	void setEspecialidade(string);
	string getEspecialidade();

	string realizaCirurgia();


};
#endif 
