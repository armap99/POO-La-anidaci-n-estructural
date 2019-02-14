//Codigo:fecha.h
#ifndef FECHA_H
#define FECHA_H

#include<iostream>
#include<string.h>
using namespace std;

class fecha
{
    private:
        int dia,mes,anio;
        string entrada;

    public:
        int getDia();
        int getMes();
        int getAnio();
        string getFecha();

        void setDia(const int&);
        void setMes(const int&);
        void setAnio(const int&);
        void setFecha();

};

#endif // FECHA_H
