#ifndef OTORRINO_H
#define OTORRINO_H
#include <string>
#include "Medico.h"

using namespace std;

class Otorrino : public Medico{
	private:
	string especialidade;	

	public:
	Otorrino();
	Otorrino(string, float, float, string);
	void setEspecialidade(string);
	string getEspecialidade();

	string realizaCirurgia();


};
#endif 
