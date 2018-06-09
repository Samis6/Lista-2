#ifndef CIRURGIAO_H
#define	CIRURGIAO_H
#include <string>
#include "Medico.h"

using namespace std;

class Cirurgiao : public Medico{
private:
	string especialidade;
public:
	
	Cirurgiao();
	Cirurgiao(string, float, float, string);
	void setEspecialidade(string);
	string getEspecialidade();
	
	string realizaCirurgia();

};

#endif
