#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> v(n), v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    v1.insert(v1.begin() + n, v.begin(), v.end());

    for (int nv : v1)
    {
        cout << nv << " ";
    }

    return 0;
}