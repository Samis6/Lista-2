#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"
#include <iostream>

class Circulo: public FiguraGeometrica{
  private:
    int raio;
  public:
    //Circulo();

    void setRaio(int r);
    int getRaio();

    float calcularArea(int raio);
};

#endif //CIRCULO_H
