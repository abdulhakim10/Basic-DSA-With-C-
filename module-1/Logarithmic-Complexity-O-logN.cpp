#include <bits/stdc++.h>
using namespace std;
/**
 * rules to calculate time complexity
 * always take the worst case
 * ignore the constant
 */
int main()
{
    int n;
    cin >> n; // O(1)
    
    for (int i = 1; i <= n; i *= 2) // O(log n) => order of n
    {
        cout << i << endl;
    }
    
    return 0; // O(1)
}