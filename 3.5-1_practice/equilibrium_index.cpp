#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre(n);
    pre[0] = v[0];
    int equilibrium = 0;
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    for (int i = 1; pre[i] != 0; i++)
    {
        equilibrium = pre.back() - pre[i - 1] - pre[i];
        if (equilibrium == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}