// maior
#include <iostream>

int main(){
    int a, b, c;

    std::cin >> a >> b >> c;
    int maior = (a + b + abs(a - b)) / 2;
    maior = (maior + c + abs(maior - c)) / 2;

    std::cout << maior << " eh o maior\n";

    return 0;
}