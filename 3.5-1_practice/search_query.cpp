#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cin >> q;
    while (q--)
    {
        int l = 0, r = n - 1;
        int x;
        cin >> x;

        int flag = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (v[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}