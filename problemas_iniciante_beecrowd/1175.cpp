// troca em vetor I
#include <iostream>

int main(){
    int size = 20;
    int v1[size], v2[size];

    for(int i = 0; i < size; i++){
        // leitura dos valores do vetor
        std::cin >> v1[i];
    }

    for(int i = 0; i < size; i++){
        v2[i] = v1[size - 1 - i];
        v2[size - 1 - i] = v1[i];
        std::cout << "N[" << i << "] = " << v2[i] << std::endl;
    }


    return 0;
}