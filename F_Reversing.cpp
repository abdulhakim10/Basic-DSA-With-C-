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

    for (int i = n - 1; i >= 0; i--) // O(N)
    {
        cout << v[i] << " ";
    }

    return 0;
}

// Calculate O(N) + O(N) = O(2N) → simplified to → O(N).