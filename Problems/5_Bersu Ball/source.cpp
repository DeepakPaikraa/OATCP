#include <bits/stdc++.h>
using namespace std;

int n, m, a[105], b[105], ans;

int main()
{
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(a[i] - b[j]) <= 1)
            {
                ans++;
                b[j] = -100;
                break;
            }
        }
    }
    cout << "Output: " << ans << endl;
}
