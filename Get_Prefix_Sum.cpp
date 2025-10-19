#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        long long temptInt;
        cin >> temptInt;
        sum += temptInt;
        v[i] = sum;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    return 0;
}