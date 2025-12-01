#include <bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(0); cin.tie(0);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
    int n, m; cin>>n>>m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int num[m];

    for(int i =0; i<m; i++){
        num[i]=0;
    }

    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j<n; j++){
            if(arr[j][i] > num[i]){
                num[i]=arr[j][i];
            }
        }
    }   

    int sum = 0;
    for(int i =0; i<m; i++){
        sum+=num[i];
    }

    cout<<sum;
    
}