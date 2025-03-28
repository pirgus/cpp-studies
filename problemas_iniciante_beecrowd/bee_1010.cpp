// calculo simples
#include <iostream>
#include <iomanip>

int main(){
    int p1_code, p1_qtt, p2_code, p2_qtt;
    double p1_value, p2_value, total;

    std::cin >> p1_code >> p1_qtt >> p1_value;

    std::cin >> p2_code >> p2_qtt >> p2_value;

    total = (p1_qtt * p1_value) + (p2_qtt * p2_value);

    std::cout << "VALOR A PAGAR: R$ " << std::setprecision(2) << std::fixed << total << std::endl;

    return 0;
}