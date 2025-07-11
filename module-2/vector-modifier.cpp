#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};
    // vector<int> v2 = {100, 200, 300};
    // vector<int> v2;
    // v2 = v;
    // v.insert(v.begin() + 2, v2.begin(), v2.end()); // Time complexity O(N + K)
    // v.erase(v.begin() + 1, v.begin() + 5); // Time complexity O(N + K)
    // replace(v.begin(), v.end(), 2, 100); // replace(range,value that you want to replace, new value that you want to give instead of replace value) O(N)
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // vector<int>::iterator it = find(v.begin(), v.end(), 5);
    // auto it = find(v.begin(), v.end(), 5); // Time complexity O(N)
    // if (it == v.end())
    // {
    //     cout << "Not found";
    // }
    // else
    // {
    //     cout << "Found" << " " << *it << endl;
    // }
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}