#include <iostream>
#include <vector>
#include <dlfcn.h>
#include "matrixOperation.h"

using namespace std;

enum operations
{
    pplus,
    pminus
};

operations def_oper(string oper)
{
    if (oper == "+")
        return pplus;
    else
        return pminus;
}

int main()
{
    int n, m;
    string oper;
    cin >> n;
    cin >> m;
    cin >> oper;

    vector<vector<float>> m1(n, vector<float>(m));
    vector<vector<float>> m2(n, vector<float>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> m1[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> m2[i][j];
        }
    }

    vector<vector<float>> res;

    switch (def_oper(oper))
    {
    case pplus:
        res = operAdd(n, m, m1, m2);
        break;
    case pminus:
        res = operSub(n, m, m1, m2);

    default:

        break;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
