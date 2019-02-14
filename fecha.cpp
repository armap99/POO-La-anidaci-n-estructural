//Codigo:fecha.cpp
#include "fecha.h"

int fecha :: getDia(){
    return dia;
}

int fecha :: getMes(){
    return mes;
}

int fecha :: getAnio(){
    return anio;
}

/*string fecha::getFecha()
{
    return entrada;
}*/

void fecha :: setDia(const int& d){
    dia = d;
}

void fecha :: setMes(const int& m){
    mes = m;
}

void fecha :: setAnio(const int & a){
    anio = a;
}

/*void fecha::setFecha()
{
    entrada=""+dia"/"+mes+"/"+anio;
}*/
