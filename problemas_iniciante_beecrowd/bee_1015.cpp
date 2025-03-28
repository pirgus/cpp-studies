// distancia entre dois pontos
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double x1, y1, x2, y2, distance;

    std::cin >> x1 >> y1 >> x2 >> y2;

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    std::cout << std::setprecision(4) << std::fixed << distance << std::endl;
}