#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
using vi = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,k;
    cin>>n>>k;
    
    int rigth[n];
    int left[n];

    for (int i = 0; i < n; i++)
    {
        cin>>rigth[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>left[i];
    }

    sort(rigth, rigth+n);
    sort(left, left+n);

    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if(rigth[i]<=k){
            k-=rigth[i];
            if(left[i]<=k){
                cont++;
                k-=left[i];
            }
        }
    }
    cout<<cont;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}