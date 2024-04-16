#include <bits/stdc++.h>
using namespace std;
// function to calculate hamming distance
int inBetweenHamDist(vector<int> &v)
{
    int ans = 0;
    for (int pos = 0; pos < 32; pos++)
    {
        int ones = 0, zeros = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if ((v[i] >> pos) & 1)
            {
                ones++;
            }
            else
            {
                zeros++;
            }
        }
        ans += ones * zeros;
    }
    return ans;
}

// driver code
int main()
{
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int ans = inBetweenHamDist(v);
    cout << ans << endl;

    return 0;
}