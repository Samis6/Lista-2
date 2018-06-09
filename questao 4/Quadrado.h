#ifndef Quadrado_H
#define Quadrado_H
#include "FiguraGeometrica.h"

using namespace std;

class Quadrado: public FiguraGeometrica
{
    public:
        Quadrado();
        Quadrado(string Qua, int Bas, int alt);

        void setBaset(int Bas);
        int getbaset();
        void setalturat(int alt);
        int getalturat();

        float Calcularea();

    protected:

    private:
        int baset, alturat;
};

#endif // Quadrado_H
