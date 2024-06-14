// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-05/challenges/get-prefix-sum
// Solved at:Fri 14 june 2024 7:56 pm
//@handle: Imtiaz Deepto
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int sz;
    cin >> sz;
    vector<long long> v(sz);
    cin >> v[0];
    for (int i = 1; i < sz; i++)
    {
        long long x;
        cin >> x;
        v[i] = v[i - 1] + x;
    }
    for(int i=sz-1;i>=0;i--)cout<<v[i]<<" ";

    return 0;
}