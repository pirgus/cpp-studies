// media 1
#include <iostream>
#include <iomanip>

int main(){
    double a, b, mean;

    std::cin >> a >> b;

    mean = (a * 3.5 + b * 7.5) / (11);

    std::cout << "MEDIA = " << std::setprecision(5) << std::fixed << mean << std::endl;

    return 0;
}