// implementacao de lista em C++, usando orientacao a objetos

#include <iostream>

// #define N 10

class list
{
private:
    int *data;
    int size;
public:
    list(int l_size);
    ~list();
};

list::list(int l_size){
    list::data = (int*) malloc(sizeof(int) * l_size);

}

list::~list(){

}
