#include <bits/stdc++.h>
using namespace std;


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int L = 0; L < n; L++)
    
    {
        for (int R = L; R < n; R++)
        {
            for (int i = L; i <= R; i++)
            {
                sum += arr[i];
            }
        }
    }

    cout << sum;
}