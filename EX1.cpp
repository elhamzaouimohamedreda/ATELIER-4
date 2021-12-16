#include <iostream>
#include <cmath>

using namespace std;
//ici on a fait la class complexe ou on va initialiser les variables et les operateurs
class complexe
{
    double Re;
    double Img;

public:
    complexe(double a=0, double b=0)
    {
        Re = a;
        Img = b;
    }
    void afficher()
    {
        cout << Re;
        if (Img >= 0)
            cout << " + ";

        cout << Img << "i" << endl;
    }
    double module()
    {
        return sqrt(Re * Re + Img * Img);
    }
    complexe conjugue()
    {
        complexe c;
        c.Re = Re;
        c.Img = -Img;
        return c;
    }

    //complexe + complexe
    complexe operator+(complexe a)
    {
        complexe s;
        s.Re = Re + a.Re;
        s.Img = Img + a.Img;
        return s;
    }

    //complexe + double
    complexe operator+(double x)
    {
        complexe s;
        s.Re = Re + x;
        s.Img = Img;
        return s;
    }

    //complexe - complexe
    complexe operator-(complexe a)
    {
        complexe s;
        s.Re = Re - a.Re;
        s.Img = Img - a.Img;
        return s;
    }

    //complexe * complexe
    complexe operator*(complexe a)
    {
        complexe p;
        p.Re = Re * a.Re - Img * a.Img;
        p.Img = Re * a.Img + Img * a.Re;
        return p;
    }

    //double + complexe
    friend complexe operator+(double, complexe);
};
complexe operator+(double x, complexe a)
{
    complexe s;
    s.Re = a.Re + x;
    s.Img = a.Img;
    return s;

}
int main()
{
    complexe x(3, 7), y(4, 9),z;
    cout << "Complexe x = ";
    x.afficher();
    cout << "Le module de x est : " << x.module() << endl;
    cout << "Le conjugué de x est : ";
    x.conjugue().afficher();
      cout << "x + y = ";
    x = (y + z);
    z.afficher();

}
