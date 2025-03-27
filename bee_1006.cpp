// media 2
#include <iostream>
#include <iomanip>

int main(){
    double a, b, c, mean;
    std::cin >> a >> b >> c;

    mean = (a * 2 + b * 3 + c * 5) / 10;

    std::cout << "MEDIA = " << std::setprecision(1) << std::fixed << mean << std::endl;

    return 0;
}