#include <bits/stdc++.h>
using namespace std;
/*
* Space complexity depends on array
*/
int main()
{
    int n,m; // -> O(1)
    cin >> n >> m;
    int a[n]; // -> O(N)
    int b[n][m]; // -> O(N*M)
    int sum = 0; //-> O(1)
    for (int i = 0; i < n; i++) // -> O(1)
    {
        sum += 2; // -> O(1)
    }
    
    return 0;
}