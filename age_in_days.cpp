#include <iostream>

int main() {
    int age_in_d, years, months;

    std::cin >> age_in_d;
    years = age_in_d/365;
    int mod_y = age_in_d % 365;

    months = mod_y / 30;
    int mod_m = mod_y % 30;

    std::cout << years << " ano(s)" << std::endl;
    std::cout << months << " mes(es)" << std::endl;
    std::cout << mod_m << " dia(s)" << std::endl;

    return 0;
}