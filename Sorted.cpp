// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-05/challenges/sorted-2-2
//  Solved at:Fri 14 june 2024 10:45pm
//@handle: Imtiaz Deepto
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    while (n--)
    {
        long long sz;
        cin >> sz;
        vector<long long> arr(sz + 1, INT16_MAX);
        bool flag = true;
        for (long long i = 0; i < sz; i++)
        {
            cin >> arr[i];
        }
        for (long long i = 0; i < sz; i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}