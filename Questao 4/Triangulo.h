#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

using namespace std;

class Triangulo: public FiguraGeometrica
{
    public:
        Triangulo();
        Triangulo(string Tri, int Bas, int alt);

        void setBaset(int Bas);
        int getbaset();
        void setalturat(int alt);
        int getalturat();

        float Calcularea();

    protected:

    private:
        int baset, alturat;
};

#endif // TRIANGULO_H
