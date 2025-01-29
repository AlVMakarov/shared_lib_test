#include <iostream>
#include <vector>
#include <dlfcn.h>
#include "matrixOperation.h"

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;

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
    vector<vector<float>> res1, res2;

    res1 = operAdd(n, m, m1, m2);
    res2 = operSub(n, m, m1, m2);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << res1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << res2[i][j] << " ";
        }
        cout << endl;
    }
}
