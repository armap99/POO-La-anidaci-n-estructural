//Codigo:producto.cpp
#include "producto.h"

string Producto ::getCodigo(){
    //string aux;
    //aux = codigo;
    return codigo;
}

string Producto::getNombre()
{
    return nombre;
}

float Producto::getPeso()
{
    return peso;
}

float Producto::getPrmy()
{
    return prmy;
}

float Producto::getPrmn()
{
    return prmn;
}

int Producto::getExistencia()
{
    return existencia;
}

int Producto::getEntrada()
{
    return entrada.getDia();
}

int Producto::getMes(){
    return entrada.getMes();
}

int Producto::getA(){
    return entrada.getAnio();
}

void Producto::setCodigo(const char &c,const int&i)
{
    codigo[i]=c;
    /*for(i=0;i<13;i++){
        codigo[i]=c;
    }*/
}

void Producto::setNombre(const string &n)
{
    nombre = n;
}

void Producto::setPeso(const float &p)
{
    peso = p;
}

void Producto::setPrmy(const float &my)
{
    prmy = my;
}

void Producto::setPrmn(const float &mn)
{
    prmn = mn;
}

void Producto::setExistencia(const int &e)
{
    existencia =e;

}

void Producto::setEntrada(const fecha &dia)
{
    entrada = dia;
}

