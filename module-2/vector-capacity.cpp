#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // v.clear(); // clear vector's size not capacity. but value remain in memory until new not come.
    // v.resize(2); // resize the vector's size.
    v.resize(8, 30); // increase the size and assigned value for increased size. output: 10 20 30 30 30 30 30 30
    for (int nv : v)
    {
        cout << nv << " ";
    }

    return 0;
}