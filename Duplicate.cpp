#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int isDuplicate = 0;
    for (int i = 0; i < n; i++)
    {
        int tempInt;
        cin >> tempInt;
        if (!v.empty())
        {
            for (int i = 0; i < (int)v.size(); i++)
            {
                if (v[i] == tempInt)
                {
                    isDuplicate = 1;
                }
            }
            if (isDuplicate == 0)
            {
                v.push_back(tempInt);
            }
        }
        else
        {
            v.push_back(tempInt);
        }
    }
    if (isDuplicate == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     int isDuplicate = 1;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];

//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if(v[i] == v[j])
//             {
//                 isDuplicate = 0;
//                 break;
//             }
//         }

//     }
//     if (isDuplicate == 1)
//     {
//         cout << "NO";
//     }
//     else{
//         cout << "YES";
//     }

//     return 0;
// }
