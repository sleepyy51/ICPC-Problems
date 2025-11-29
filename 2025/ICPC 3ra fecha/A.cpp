#include <bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int cont = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    for (int i = n; i > 0; i--)
    {
        if(sum % i == 0){
            break;
        }
        cont++;
    }
    
    cout<<cont;
}