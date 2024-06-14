// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-05/challenges/duplicate-12
// Solved at: Fri 14 june 2024 7:50 pm
//@handle: Imtiaz Deepto
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool found = false;
    vector<long long> v(n + 1, -1);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
            found = true;
    }
    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}