#include <iostream>
#include "F.hpp"

using namespace std;

int main()
{
    F f1 = F(7, 25, 2000, 7, 40, 30);
    F f2 = F(8, 30, 1998, 19, 52, 0);
    F f3 = F(10, 10, 2010, 20, 20, 0);
    cout << "Fecha1" << endl;
    cout << f1.d << "/" << f1.m << "/" << f1.a << "---" << f1.h << ":" << f1.min << ":" << f1.sec << endl;
    cout << "Fecha2" << endl;
    cout << f2.d << "/" << f2.m << "/" << f2.a << "---" << f2.h << ":" << f2.min << ":" << f2.sec << endl;
    cout << "Resta de dos fechas(default)" << endl;
    f1 - f2;
    int anio, mes, dia, hora, min, sec;
    F fechaPorUsuario1, fechaPorUsuario2;
    cout << "Ingrese un anio: ->";
    cin >> anio;
    cout << "Ingrese mes: ->";
    cin >> mes;
    cout << "Ingrese dia ->";
    cin >> dia;
    cout << "Ingrese hora ->";
    cin >> hora;
    cout << "Ingrese minuto ->";
    cin >> min;
    cout << "Ingrese segundo ->";
    cin >> sec;
    fechaPorUsuario1 = F(mes, dia, anio, hora, min, sec);
    cout << "Primera fecha guardada exitosamente" << endl;
    anio = 0, mes = 0, dia = 0, hora = 0, min = 0, sec = 0;
    cout << "Ingrese un anio ->";
    cin >> anio;
    cout << "Ingrese mes ->";
    ;
    cin >> mes;
    cout << "Ingrese dia ->";
    cin >> dia;
    cout << "Ingrese hora ->";
    cin >> hora;
    cout << "Ingrese minuto ->";
    cin >> min;
    cout << "Ingrese segundo ->";
    cin >> sec;
    fechaPorUsuario2 = F(mes, dia, anio, hora, min, sec);
    cout << "Segunda fecha guardada exitosamente" << endl;
    while (fechaPorUsuario1.getAnio() < fechaPorUsuario2.getAnio())
    {
        cout << "La primera fecha debe ser mayor que la segunda" << endl;
        cout << "Ingrese un anio ->";
        cin >> anio;
        cout << "Ingrese mes ->";
        cin >> mes;
        cout << "Ingrese dia ->";
        cin >> dia;
        cout << "Ingrese hora ->";
        cin >> hora;
        cout << "Ingrese minuto ->";
        cin >> min;
        cout << "Ingrese segundo ->";
        cin >> sec;
        fechaPorUsuario1 = F(mes, dia, anio, hora, min, sec);
        cout << "Primera fecha guardada exitosamente" << endl;
        anio = 0, mes = 0, dia = 0, hora = 0, min = 0, sec = 0;
        cout << "Ingrese un anio ->";
        cin >> anio;
        cout << "Ingrese mes ->";
        cin >> mes;
        cout << "Ingrese dia ->";
        cin >> dia;
        cout << "Ingrese hora ->";
        cin >> hora;
        cout << "Ingrese minuto ->";
        cin >> min;
        cout << "Ingrese segundo ->";
        cin >> sec;
        fechaPorUsuario2 = F(mes, dia, anio, hora, min, sec);
        cout << "Segunda fecha guardada exitosamente" << endl;
    }
    cout << "Resta de  fechas ingresadas por usuarios: " << endl;
    fechaPorUsuario1 - fechaPorUsuario2;
}