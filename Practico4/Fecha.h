#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class Fecha
{
    private:
        int dia, mes, anio;
    public:
        Fecha();
        Fecha(int, int, int);
        Fecha(const Fecha &);
        int getDia ();
        int getMes ();
        int getAnio ();
        bool operator<(Fecha);
        bool operator==(Fecha);
};


#endif // FECHA_H_INCLUDED
