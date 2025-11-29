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

    double res = ((r-l)+1)/k;   
    cout<<res;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    solve();
    return 0;
}