#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_set<int> s;       // duplicate elements does not include
    for (int i = 0; i < n; i++) // O(N)
    {
        cin >> v[i];
        s.insert(v[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++) // O(N)
    {
        if (s.count(v[i] + 1)) // count() => checks element exist or not. if exist return 1 if not, return 0.
        {
            count++;
        }
    }

    cout << count;
    return 0;
}