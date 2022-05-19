#include <iostream>
using namespace std;

float descuento(float sumGasto){
    float desc, total;

    if(sumGasto > 10000){
        desc = sumGasto * 0.25;
    }

    else{
        desc = sumGasto * 0.10;
    }

    total = sumGasto - desc;

    return total;
}

int main ()
{
    float gasto, sumGasto;
    int opc;

    do
    {
        cout<<"***MENU DE OPCIONES***" <<endl;
        cout<<"1. Sumar gasto.\n";
        cout<<"2. Salir.\n";
        cout<<"Que desea hacer? ";
        cin>>opc;

        switch(opc)
        {
            case 1:
                cout<<"Ingrese un gasto: Q";
                cin>>gasto;

                sumGasto = sumGasto + gasto;
                break;
            case 2:
                cout<<"El monto es de: Q"<<sumGasto<<endl;
                cout<<"El total a pagar es: Q" <<descuento(sumGasto);
                break;
            default:
                cout<<"Opcion invalida!";
        }
        cout<<endl;
    }while(opc != 2);
}
