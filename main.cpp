#include <iostream>
#include <string>
#include "Matrices.cpp"
#include "fibonacci.hpp"
#include <fstream>

int main()
{

    Fibonacci fibo;

    int minFibo, maxFibo, incFibo;
    std::string nombreFichero;

    std::cout << "Vamos a calcular fibonacci de manera recursiva \n";
    std::cout << "Introduce el valor minimo: \n";
    std::cin >> minFibo;
    std::cout << "Introduce el valor máximo: \n";
    std::cin >> maxFibo;
    std::cout << "Introduce el incremento: \n";
    std::cin >> incFibo;
    std::cout << "Introduce el nombre el fichero de salid\n";
    std::cin >> nombreFichero;

    std::cout << nombreFichero << "\n";

    fibo.run(minFibo,maxFibo,incFibo,nombreFichero);

    std::cout << "Terminado \n";

    /*
    time.start();

    for(unsigned int i = 0; i <= 1000000000; i++)
    {
        a++;
        b++;
    }
    if (time.isStarted())
    {
        time.stop();
        std::cout << "Han pasado " << time.elapsed() << "microsegundos \n";
    }

    while (nFibo != 0) {
        std::cout << "Introduce el número de la serie de fibbonacci que quieres \n";
        std::cin >> nFibo;

        time.start();

        std::cout << fibonacci_simple(nFibo) << "\n";

        time.stop();
        std::cout << "Han pasado " << time.elapsed() << "microsegundos \n";
    }

     */

    return 0;
}
