#include <iostream>

int main(){
    int qtt;
    std::cin >> qtt;
    int candidates[qtt];
    int att = 0;

    for(int i = 0; i < qtt; i++){
        std::cin >> candidates[i];
        if(candidates[i] == 1){
            att++;
        }
    }

    std::cout << att << std::endl;

    return 0;
}