#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <iostream>
#define MAX 10

class ControleDeGastos: public Despesa{
  private:
    Despesa despesas[MAX];
  public:
    void setDespesas(Despesa d);
    Despesa getDespesas();

    double calculaTotalDeDespesas();

    bool existeDespesaDoTipo(std::string t);
};

#endif //CONTROLEDEGASTOS_H
