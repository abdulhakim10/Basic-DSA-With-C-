#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x; // O(1)
    // cout << x;
    int freq[26] = {0}; // O(1)

    for (char nx : x) // O(n)
    {
        freq[nx - 'a']++; // O(1)
    }

    for (int i = 0; i < 26; i++) // O(1)
    {
        if (freq[i] > 0)
        {
            cout << (char)(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}

// O(n)