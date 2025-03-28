// consumo
#include <iostream>
#include <iomanip>

int main(){
    int distance;
    double gas;
    double total;

    std::cin >> distance >> gas;
    total = distance / gas;

    std::cout << std::setprecision(3) << std::fixed << total << " km/l\n";

    return 0;

}