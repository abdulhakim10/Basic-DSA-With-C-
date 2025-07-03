#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // -> O(n)
    {
        for (int j = 1; j <= n; j *= 2) // -> O(logN)
        {
            cout << "Hello" << endl;
        }
        
    }
    
    return 0;
}

// calculate = O(n) + O(logN) => O(NlogN) => order of N logN.