// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-05/challenges/printing-x
// Solved at: fri 14 june 2024 11:10 pm
//@handle: Imtiaz Deepto
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x == 1)
        cout << "X" << endl;
    else
    {
        int mid = x / 2;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (i == mid and j == mid)
                    cout << "X";
                else if (j == i)
                    cout << "\\";
                else if (j == x - i - 1)
                    cout << "/";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}