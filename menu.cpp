//Codigo:menu.cpp
#include "menu.h"
Menu::Menu()
{

}

void Menu::MostrarMenu()
{
    int opc,repetir=0;
    Producto ceral;
    char codigo[13];
    string nom,aux;
    fecha f;
    float ps,ma,mn;
    int tot,i,d,m,a,len,ret;
    do{

        cout << "MENU: " << endl;
        cout << "1)Ingresar un producto nuevo" << endl;
        cout << "2)Restar Producto " << endl;
        cout << "3)Aumentar el inventario " << endl;
        cout << "4)Mostar inventario" << endl;
        cout << "5)Salir" << endl;
        cin >> opc;
        if(opc == 1){
            repetir=0;

            do{
                cout << "Codigo del producto(Minimo 13 numeros y maximo 13): " << endl;
                cin >> codigo;
                len= strlen(codigo);
            }while(len!=13);
            for(i=0;i<13;i++){
                ceral.setCodigo(codigo[i],i);
            }
            cout << "Nombre del producto: " << endl;
            cin >> nom;
            ceral.setNombre(nom);
            cout << "Peso(gramos): " << endl;
            cin >> ps;
            ceral.setPeso(ps);
            cout << "Precio al mayoreo: ";
            cin >> ma;
            ceral.setPrmy(ma);
            cout << "Precio al menudeo: ";
            cin >> mn;
            ceral.setPrmn(mn);
            cout << "Existencia: ";
            cin >> tot;
            ceral.setExistencia(tot);
            do{
                cout << "Dia de ingreso:";
                cin >> d;
            }while(d>31 || d<1);
            f.setDia(d);
            do{
                cout << "Mes de ingreso(Numero de mes):";
                cin >> m;
            }while(m<1 || m>12);
            f.setMes(m);
            do{
                cout << "Anio de ingreso:";
                cin >> a;
            }while (a<1000);
            f.setAnio(a);
            ceral.setEntrada(f);
            Bodega.agregarN(ceral);
        }
        else if(opc == 4){
            Bodega.mostrar();
        }
        else if(opc ==5){
            cout << "Cerrando sistemas" << endl;
            repetir=1;
        }
        else if(opc ==2){
            do{
                cout << "Codigo del producto al que quiere restar su existencia: " << endl;
                cin >> codigo;
                len= strlen(codigo);
            }while(len!=13);
            aux= codigo;
            do{
                cout << "Cuantos desea retirar:" << endl;
                cin >> ret;
            }while(ret<1);
            Bodega.decremento(aux,ret);
            repetir=0;
        }
        else if (opc == 3) {
            do{
                cout << "Codigo del producto al que quiere aumentar su existencia: " << endl;
                cin >> codigo;
                len= strlen(codigo);
            }while(len!=13);
            aux= codigo;
            do{
                cout << "Cuantos desea aumentar:" << endl;
                cin >> ret;
            }while(ret<1);
            Bodega.aumento(aux,ret);
            repetir = 0;
        }
    }while(repetir!=1);

}
