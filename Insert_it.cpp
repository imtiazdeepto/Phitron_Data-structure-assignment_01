// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-05/challenges/insert-the-vector
// Solved at:fri 14 june 2024 10:55pm
//@handle: Imtiaz Deepto
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int one, two;
    cin >> one;
    vector<long long> v;
    for (int i = 0; i < one; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> two;
    vector<long long> v2(two);
    for (int i = 0; i < two; i++)
        cin >> v2[i];
    int indx;
    cin >> indx;
    v.insert(v.begin() + indx, v2.begin(), v2.end());

    for (int x : v)
        cout << x << " ";

    return 0;
}