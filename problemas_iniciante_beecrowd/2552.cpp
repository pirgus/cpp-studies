#include <iostream>
#include <iomanip>

class matrix
{
private:
    int rows;
    int cols;
    int **data;

public:
    matrix(int rows, int cols);
    ~matrix();
    void insert(int value, int i, int j);
    void print();
    int get(int i, int j);
};

matrix::matrix(int m_rows, int m_cols)
{
    rows = m_rows;
    cols = m_cols;
    data = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        data[i] = new int[cols];
    }
}

matrix::~matrix()
{
    for (int i = 0; i < rows; i++)
    {
        delete[] data[i];
    }
    delete[] data;
}

void matrix::insert(int value, int i, int j)
{
    data[i][j] = value;
}

void matrix::print()
{
    for (int i = 0; i < rows; i++)
    {
        // std::cout << "| ";
        for (int j = 0; j < cols; j++)
        {
            std::cout << data[i][j];
        }
        std::cout << "\n";
    }
}

int matrix::get(int i, int j)
{
    return data[i][j];
}

int main()
{
    int rows, cols;
    while (!(std::cin >> rows >> cols).eof())
    {
        matrix *m = new matrix(rows, cols);
        matrix *result = new matrix(rows, cols);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                int val;
                std::cin >> val;
                m->insert(val, i, j);
            }
        }
        // m->print();

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                // position with a pao de quejo
                if (m->get(i, j) == 1)
                {
                    result->insert(9, i, j);
                }
                else if (i == 0)
                {
                    // if first position of row
                    if (j == 0)
                    {
                        int qtt_p = 0;
                        if (rows > 1 && cols > 1)
                        {
                            // and first position of column
                            qtt_p = m->get(i, j + 1) + m->get(i + 1, j);
                        }
                        else
                        {
                            qtt_p = m->get(i, j + 1);
                        }
                        result->insert(qtt_p, i, j);
                    }
                    else if (j == cols - 1)
                    {
                        // first row, last column
                        int qtt_p = m->get(i, j - 1) + m->get(i + 1, j);
                        result->insert(qtt_p, i, j);
                    }
                    else
                    {
                        // just first row
                        int qtt_p;
                        if (rows > 1)
                        {
                            qtt_p = m->get(i, j - 1) + m->get(i, j + 1) +
                                    m->get(i + 1, j);
                        }
                        else
                        {
                            qtt_p = m->get(i, j - 1) + m->get(i, j + 1);
                        }
                        result->insert(qtt_p, i, j);
                    }
                }
                else if (i == rows - 1)
                {
                    if (j == cols - 1)
                    {
                        int qtt_p = m->get(i - 1, j) + m->get(i, j - 1);
                        result->insert(qtt_p, i, j);
                    }
                    else if (j == 0)
                    {
                        int qtt_p = m->get(i - 1, j) + m->get(i, j + 1);
                        result->insert(qtt_p, i, j);
                    }
                    else
                    {
                        int qtt_p = m->get(i - 1, j) + m->get(i, j - 1) +
                                    m->get(i, j + 1);
                        result->insert(qtt_p, i, j);
                    }
                }
                else if (j == 0)
                {
                    int qtt_p = m->get(i - 1, j) + m->get(i, j + 1) +
                                m->get(i + 1, j);
                    result->insert(qtt_p, i, j);
                }
                else if (j == cols - 1)
                {
                    int qtt_p = m->get(i - 1, j) + m->get(i, j - 1) +
                                m->get(i + 1, j);
                    result->insert(qtt_p, i, j);
                }
                else
                {
                    int qtt_p = m->get(i - 1, j) + m->get(i, j + 1) +
                                m->get(i + 1, j) + m->get(i, j - 1);
                    result->insert(qtt_p, i, j);
                }
            }
        }
        result->print();

        delete (m);
        delete (result);
    }
}