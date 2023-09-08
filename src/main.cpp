#include <iostream>
#include <Mascota.hpp>

int main(int argc, char const *argv[])
{

    std::cout << "Hola Mundo" << std::endl;
    Mascota m1("Alexa");
    m1.Jugar();
    m1.Jugar();
    m1.Jugar();

    std::cout<<m1.DecirNombre() << "tiene" << m1.DecirHambre() << "de hambre";

    m1.Comer(5);

    return 0;
}
