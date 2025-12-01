#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
using vi = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
    int l, r, k;
    cin>>l>>r>>k;

    int n = (r-l)+1;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = l++;
    }
    
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        int aux = arr[i];
        if(aux%k == 0){
            cont++;
        }
    }
    cout<<cont;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}