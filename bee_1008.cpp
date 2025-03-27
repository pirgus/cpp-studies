// salario
#include <iostream>
#include <iomanip>

int main(){
    int num, hours;
    double hour_wage, salary;

    std::cin >> num >> hours >> hour_wage;
    salary = hours * hour_wage;

    std::cout << "NUMBER = " << num << std::endl;
    std::cout << std::setprecision(2) << std::fixed << "SALARY = U$ " << salary << std::endl;
    return 0;
}