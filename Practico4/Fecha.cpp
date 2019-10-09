#include "Fecha.h"

Fecha :: Fecha(){
    dia = 1;
    mes = 1;
    anio = 1;
}

Fecha :: Fecha(int dia, int mes, int anio){
    dia = dia;
    mes = mes;
    anio = anio;
}

Fecha :: Fecha(const Fecha &otra){
    dia = otra.dia;
    mes = otra.mes;
    anio = otra.anio;
}

bool Fecha :: operator==(Fecha f1){
    bool sonIguales = false;
    if(anio == f1.anio){
        if(mes == f1.mes){
            if(dia == f1.dia){
                sonIguales = true;
            }
        }
    }
    return sonIguales;
}

bool Fecha :: operator<(Fecha f1){
    bool masChico = true;
    if(anio >= f1.anio)
        masChico == false;
    else{
        if(mes  f)
    }
}
