#include <iostream>
using namespace std;
class F
{
public:
    F() {}
    F(int m, int d, int a, int h, int min, int sec)
    {
        this->m = m;
        this->a = a;
        this->d = d;
        this->h = h;
        this->min = min;
        this->sec = sec;
    }
    F &operator++(int)
    {
        if ((this->d == 31) && ((this->m == 1 || this->m == 3 || this->m == 5 || this->m == 7 || this->m == 8 || this->m == 10)))
        {
            m++;
            d = 1;
        }
        else if ((this->d == 30) && (this->m == 4 || this->m == 6 || this->m == 9 || this->m == 11))
        {
            m++;
            d = 1;
        }
        else if ((this->d == 28) && (this->m == 2))
        {
            m++;
            d = 1;
        }
        else if ((this->d == 31) && (this->m = 12))
        {
            a++;
            m = 1;
            d = 1;
        }
        else
        {
            d++;
        }

        return *this;
    }
    F operator--()
    {
        if ((this->d == 0) && ((this->m == 12 || this->m == 5 || this->m == 7 || this->m == 8 || this->m == 10)))
        {
            m--;
            d = 30;
        }
        else if ((this->d == 0) && (this->m == 2 || this->m == 4 || this->m == 6 || this->m == 9 || this->m == 11))
        {
            m--;
            d = 31;
        }
        else if ((this->d == 0) && (this->m == 3))
        {
            m--;
            d = 28;
        }
        else if ((this->d == 0) && (this->m = 1))
        {
            a--;
            m = 12;
            d = 31;
        }
    }
    int F::getAño()
    {
        return a;
    }
    int F::getMes()
    {
        return m;
    }
    int F::getDia()
    {
        return d;
    }
    int F::getHora()
    {
        return h;
    }
    int F::getMinuto()
    {
        return min;
    }
    int F::getSec()
    {
        return sec;
    }
    F::F operator-(F resta)
    {
        int anioRespuesta = a - resta.getAño();
        int mesRespuesta = m - resta.getMes();
        int diaRespuesta = d - resta.getDia();
        int horaRespuesta = h - resta.getHora();
        int minRespuesta = min - resta.getMinuto();
        int secRespuesta = sec - resta.getSec();
        F temporal = F(mesRespuesta, diaRespuesta, anioRespuesta, horaRespuesta, minRespuesta, secRespuesta);
    }

private:
    unsigned int m, d, a, h, min, sec;
    friend int main();
};