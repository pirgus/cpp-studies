#include <iostream>

void troca(int *i, int *j){
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

int main(){
    int i = 123;
    int j = 10;
    int *p, *q;
    p = &i;
    q = &j;
    std::cout << i << ", " << j << std::endl;

    int v[10]; // vetor com alocação estática
    int *v2 = (int*) malloc(10 * sizeof(int));
    for(int i = 0; i < 10; i ++){
        v[i] = i;
        if(i < 9){
            std::cout << v[i] << "(" << &v[i] << "), ";
        }
        else{
            std::cout << v[i] << "(" << &v[i] << ")";
        }

    }
    std::cout << std::endl;
    std::cout << &v2 << std::endl;

    for(int i = 0; i < 10; i++){
        v2[i] = i * 2;
        if(i < 9){
            std::cout << v2[i] << "(" << &v2[i] << "), ";
        }
        else{
            std::cout << v2[i] << "(" << &v2[i] << ")";
        }
    }
    std::cout << std::endl;

    free(v2);

    return 0;
}