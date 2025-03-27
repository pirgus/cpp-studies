#include <iostream>

int main(){
    double values[6]; // alocacao estatica, problema simples. Ideal fazer alocacao dinamica
    int positive_count = 0;
    for(int i = 0; i < 6; i++){
        std::cin >> values[i];
        if(values[i] > 0){
            positive_count++;
        }
    }

    std::cout << positive_count << " valores positivos\n";

    return 0;
}