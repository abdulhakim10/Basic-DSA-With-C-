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
    for (int vn : v)
    {
        if (vn < 0)
        {
            cout << 2 << " ";
        }
        else if (vn > 0)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << vn << " ";
        }
    }
    return 0;
}