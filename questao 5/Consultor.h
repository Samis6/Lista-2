#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"
#include <iostream>

class Consultor: public Funcionario{
    private:
        float percentual;
    public:
        void setPercentual(float p);
        float getPercentual();

        float getSalario(float percentual);
        virtual float getSalario();
};

#endif // CONSULTOR_H
