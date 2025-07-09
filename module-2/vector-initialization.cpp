#include <bits/stdc++.h>
using namespace std;
// STL = Standard Template Library
int main()
{
    // vector<int> v; // type 1
    // vector<int> v(5); // type 2 
    // vector<int> v(10, -1); // type 3 output -> -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
    // vector<int> v2 (v); // type 4 output -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 v vector copy into v2
    int arr[5] = {1, 2, 3, 4, 5};
    // vector<int> v(arr, arr+5); // type 5 copy arr element into vector
    vector<int> v = {1,2,3,4};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    // cout << v.size() << endl;
    return 0;
} 