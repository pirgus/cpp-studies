#include <iostream>

class matrix
{
private:
    int rows;
    int cols;
    int** data;
public:
    matrix(int rows, int cols);
    ~matrix();
    void insert(int value, int i, int j);
    void print();
};

matrix::matrix(int m_rows, int m_cols)
{
    rows = m_rows;
    cols = m_cols;
    data = new int *[rows];

    for(int i = 0; i < rows; i++){
        data[i] = new int[cols];
    }
}

matrix::~matrix(){
    for(int i = 0; i < rows; i++){
        delete [] data[i];
    }
    delete [] data;
}

void matrix::insert(int value, int i, int j){
    data[i][j] = value;
}

void matrix::print(){
    for(int i = 0; i < rows; i++){
        std::cout << "|\t";
        for(int j = 0; j < cols; j++){
            std::cout << data[i][j] << "\t";
        }
        std::cout << "\t|\n";
    }
}

int main(){
    int d, qtt_v;
    std::cin >> d >> qtt_v;
    matrix *m = new matrix(qtt_v, d+1);
    for(int i = 0; i < qtt_v; i++){
        for(int j = 0; j < d + 1; j++){
            int val;
            std::cin >> val;
            m->insert(val, i, j);
        }
    }

    m->print();

    return 0;

    delete(m);
}