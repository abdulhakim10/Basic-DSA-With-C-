#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) // -> O(n)
    {
        for (int j = 0; j < n; j++) // -> O(n)
        {
            cout << "Hello" << endl;
        }
        
    }
    
    return 0;
}

// calculate = O(n * n) => order of n square