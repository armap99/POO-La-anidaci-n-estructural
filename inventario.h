//Codigo:inventario.h
#ifndef INVENTARIO_H
#define INVENTARIO_H

#include<cstring>
#include"producto.h"


class Inventario
{
    private:
        Producto cosas[500];
        int indice;

    public:
        Inventario();
        void mostrar();
        void agregarN(const Producto&);
        void decremento(const string&, const int&);
        void aumento(const string&, const int&);

};


#endif // INVENTARIO_H
