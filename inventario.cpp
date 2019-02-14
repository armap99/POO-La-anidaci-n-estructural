//Codigo:inventario.cpp
#include "inventario.h"

Inventario::Inventario()
{
    indice= 0;
}

void Inventario::mostrar()
{
    int i;
    cout << "Inventario :" << endl;
    for (i=0; i<indice; i++) {
        Producto lqs = cosas[i];
        cout << "Producto: " << lqs.getNombre() << endl;
        cout << "Codigo: " << lqs.getCodigo() << endl;
        cout << "Peso: " << lqs.getPeso() << "g" << endl;
        cout << "Precio al mayoreo: " << lqs.getPrmy() << endl;
        cout << "Precio al menudeo: " << lqs.getPrmn() << endl;
        cout << "Existencia :" << lqs.getExistencia() <<endl;
        cout << "Fecha de entrada: " << endl;
        cout << lqs.getEntrada() << "/" << lqs.getMes() << "/" << lqs.getA() << endl;


    }
}

void Inventario::agregarN(const Producto &pro)
{
    if(indice<499)
    {
        cosas[indice] = pro;
        indice++;
    }
    else{
       cout << "Inventario lleno" << endl;
    }
}

void Inventario::decremento(const string&code2, const int&can)
{
    int i,j=indice+1;
    int cantidadActual;
    string comp;
    for (i=0;i<indice;i++) {
        comp= cosas[i].getCodigo();
        if(code2.compare(comp) == 0){
            j=0;
            cantidadActual= cosas[i].getExistencia();
            if(cantidadActual==0 || cantidadActual-can<0){
                cout << "Existencia en 0 " << endl;
                cosas[i].setExistencia(0);
            }
            else{
                cantidadActual -= can;
                cosas[i].setExistencia(cantidadActual);
            }

        }

    }
    if(j>indice){
        cout << "No se encontro ese codigo" << endl;
    }

}

void Inventario::aumento(const string&code, const int&can2)
{
    int i,j=indice+1;
    int cantidadActual;
    string comp;
    for (i=0;i<indice;i++) {
        comp= cosas[i].getCodigo();
        if(code.compare(comp) == 0){
            j=0;
            cantidadActual= cosas[i].getExistencia();
            cantidadActual += can2;
            cosas[i].setExistencia(cantidadActual);

        }

    }
    if(j>indice){
        cout << "No se encontro ese codigo" << endl;
    }

}

