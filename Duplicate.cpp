#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int isDuplicate = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(v[i] == v[j])
            {
                isDuplicate = 0;
                break;
            }
        }

    }
    if (isDuplicate == 1)
    {
        cout << "NO";
    }
    else{
        cout << "YES";
    }


    return 0;
}