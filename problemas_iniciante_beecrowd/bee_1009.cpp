// salario com bonus
#include <iostream>
#include <iomanip>
#include <string>

int main(){
    std::string name; // this will occupy more space (32bytes) than a shorter char vector 
    double salary, comms;
    std::cin >> name >> salary >> comms;

    double new_salary = salary + (comms * 0.15);

    std::cout << "TOTAL = R$ " << std::setprecision(2) << std::fixed << new_salary << std::endl;

    return 0;
}