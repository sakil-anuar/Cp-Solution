#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int B[100];
    int sum = 0, sum1 = 0, count = 0;

    for(int i = 0; i < a; i++)
    {
        cin >> B[i];
        sum += B[i];
    }

    sort(B, B + a);

    for(int j = a - 1; j >= 0; j--)
    {
        sum1 += B[j];
        count++;

        if(sum1 > sum - sum1)
        {
            break;
        }
    }

    cout << count;

    return 0;
}
