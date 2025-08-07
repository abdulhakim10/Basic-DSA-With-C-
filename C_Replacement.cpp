#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // O(1)
    vector<int> v(n);
    for (int i = 0; i < n; i++) // O(N)
    {
        cin >> v[i];
    }
    for (int vn : v) // O(N)
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

// Calculate O(N) + O(N) = O(2N) → simplified to → O(N)