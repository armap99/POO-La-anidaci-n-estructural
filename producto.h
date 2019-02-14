//Codigo:producto.h
#ifndef PRODUCTO_H
#define PRODUCTO_H

#include "fecha.h"
using namespace std;

class Producto{
    private:
        char codigo[13] ;
        string nombre;
        float peso,prmy,prmn;
        int existencia;
        fecha entrada;

    public:
        string getCodigo();
        string getNombre();
        float getPeso();
        float getPrmy();
        float getPrmn();
        int getExistencia();
        int getEntrada();
        int getMes();
        int getA();

        void setCodigo(const char&, const int&);
        void setNombre(const string&);
        void setPeso(const float&);
        void setPrmy(const float&);
        void setPrmn(const float&);
        void setExistencia(const int&);
        void setEntrada(const fecha&);
        void setPosicion(const int&);
};

#endif // PRODUCTO_H
