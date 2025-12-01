#include <bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(0); cin.tie(0);
    unordered_set<int> set;
    int faltan = 0;
    for (int i = 0; i < 10; i++)
    {
        int x;
        cin>>x;
        set.insert(x);
    }
    
    int arr[4] = {1,2,3,4};

    for (int i = 0; i < 4; i++)
    {
        if(!set.count(arr[i])){
            faltan++;
        }
    }
    

    cout<<faltan;
}