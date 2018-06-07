#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>

class Despesa{
  private:
    double valor;
    std::string tipoDeGasto;
  public:
    void setValor(double v);
    double getValor();

    void setTipoDeGasto(std::string t);
    std::string getTipoDeGasto();
};


#endif //DESPESA_H
