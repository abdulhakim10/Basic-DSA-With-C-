#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int middle = n / 2;

    for (int i = 0; i < n; i++)
    {
        if(i < middle)
        {
            cout << string(i, ' ') << "\\" << string(n - 2 - 2 * i, ' ')  << "/" << endl;
        }
        else if (i == middle)
        {
            cout << string(i, ' ') << "X" << endl;
        }
        else
        {
            int j = n - i - 1;
            cout << string(j, ' ') << "/" << string(n - 2 - 2 * j, ' ') << "\\" << endl;
        }
        
    }
    
    return 0;
}