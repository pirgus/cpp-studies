#include <stdio.h>
#include <iostream>

void inc_copy(int y){
    y++;
    std::cout << "inside inc copy = " << y << std::endl;
    // printf("inside inc_copy = %d\n", y);
}

void inc_reference(int *y){
    (*y)++;
    std::cout << "inside inc_reference = " << *y << std::endl;
    // printf("inside inc_reference = %d\n", *y);
}

int main() {
    int x = 5;
    printf("%d\n", x);

    inc_copy(x);
    printf("%d\n", x);
    inc_reference(&x);
    printf("%d\n", x);
}