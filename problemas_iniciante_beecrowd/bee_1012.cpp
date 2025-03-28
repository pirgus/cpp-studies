// area
#include <iostream>
#include <iomanip>

int main(){
    double a, b, c;
    double triangle, circle, trap, square, rec, pi;
    pi = 3.14159;

    std::cin >> a >> b >> c;

    triangle = (a * c) / 2.0;
    circle = pi * c * c;
    trap = ((a + b) * c) / 2.0;
    square = b * b;
    rec = a * b;

    std::cout << "TRIANGULO: " << std::setprecision(3) << std::fixed << triangle << std::endl;
    std::cout << "CIRCULO: " << std::setprecision(3) << std::fixed << circle << std::endl;
    std::cout << "TRAPEZIO: " << std::setprecision(3) << std::fixed << trap << std::endl;
    std::cout << "QUADRADO: " << std::setprecision(3) << std::fixed << square << std::endl;
    std::cout << "RETANGULO: " << std::setprecision(3) << std::fixed << rec << std::endl;

    return 0;
}