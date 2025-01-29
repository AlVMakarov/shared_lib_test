#include <vector>
#include "matrixOperation.h"

using namespace std;

/**
 * @brief Сложение матриц
 *
 * @param n число строк
 * @param m число столбцов
 * @param m1 первая матрица
 * @param m2 вторая матрица
 * @return vector<vector<float>>& ссылка на результирующую матрицу m1+m2
 */
vector<vector<float>> operAdd(int n, int m, vector<vector<float>> &m1, vector<vector<float>> &m2)
{
    vector<vector<float>> res(n, vector<float>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return res;
}

/**
 * @brief Вычитание матриц
 *
 * @param n число строк
 * @param m число столбцов
 * @param m1 матрица из которой вычитают
 * @param m2 матрица которую вычитают
 * @return vector<vector<float>>& ссылка на результирующую матрицу m1-m2
 */
vector<vector<float>> operSub(int n, int m, vector<vector<float>> &m1, vector<vector<float>> &m2)
{
    vector<vector<float>> res(n, vector<float>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[i][j] = m1[i][j] - m2[i][j];
        }
    }
    return res;
}