#include <iostream>
int main()
{
    int a;
    float b;
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> a;
    std::cout << "Czy udalo sie wczytac? " << std::cin.good() << std::endl;
    std::cout << "Czy cos nawalilo? " << std::cin.fail() << std::endl;

    std::cout << "Podaj liczbe rzeczywista: ";
    std::cin >> b;
    std::cout << "Czy udalo sie wczytac? " << std::cin.good() << std::endl;
    std::cout << "Czy cos nawalilo? " << std::cin.fail() << std::endl;

    std::cout << "Liczba a = " << a << std::endl;
    std::cout << "Liczba b = " << b << std::endl;
    return 0;
}
