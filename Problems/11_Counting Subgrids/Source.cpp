#include <bits/stdc++.h>
using namespace std;
int count_subgrid(vector<vector<int>> &color)
{
    int n = color.size();
    int subgrids = 0;
    for (int a = 0; a < n; a++)
    {
        for (int b = a + 1; b < n; b++)
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (color[a][i] == 1 && color[b][i] == 1)
                {
                    count++;
                }
            }
            subgrids += ((count - 1) * count) / 2;
        }
    }
    return subgrids;
}

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            v[i][j] = a;
        }
    }
    int subgrids = count_subgrid(v);
    cout << subgrids << endl;

    return 0;
}