#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // cout<<"Press 'd' to --> ,  Press 'a' to <-- , Press 'q' to quit "<<endl;
    // Tamaño de pagina recomendado 33%
    Ventana v;

    Dibujo d1(2, 1, "dk");
    Dibujo d2(1, 28, "plataforma");
    Dibujo d3(102, 28, "plataforma");
    Dibujo d4(203, 28, "plataforma");
    Dibujo d5(304, 28, "plataforma");
    Dibujo d6(1, 62, "plataforma");
    Dibujo d7(102, 62, "plataforma");
    Dibujo d8(203, 62, "plataforma");
    Dibujo d9(304, 62, "plataforma");
    Dibujo e1(366, 36, "escalera");
    Dibujo e2(1, 71, "escalera");

    bool ejecucion = true;
    while (ejecucion)
    {
        // ciclo de actualización
        v.Actualizar();
        if (getch() == 'q')
        {
            ejecucion = false;
        }
        if (getch() == 'd')
        {
            d1.AvanzarX(4);
        }
        if (getch() == 'a')
        {
            d1.RetrocederX(4);
        }
        if (getch() == 's')
        {
            d1.BajarY(3);
        }
        if (getch() == 'w')
        {
            d1.SubirY(3);
        }

        // ciclo de dibujo
        clear();

        // v.Dibujar();
        d1.Dibujar();
        d2.Dibujar();
        d3.Dibujar();
        d4.Dibujar();
        d5.Dibujar();
        d6.Dibujar();
        d7.Dibujar();
        d8.Dibujar();
        d9.Dibujar();
        e1.Dibujar();
        e2.Dibujar();

        refresh();
        usleep(41000);
    }

    return 0;
}
