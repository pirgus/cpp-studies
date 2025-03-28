// esfera
#include <iostream>
#include <iomanip>

int main(){
    double raio, volume, pi;
    pi = 3.14159;

    std::cin >> raio;
    volume = (4/3.0) * pi * (raio * raio * raio);

    std::cout << "VOLUME = " << std::setprecision(3) << std::fixed << volume << std::endl;

    return 0;
}