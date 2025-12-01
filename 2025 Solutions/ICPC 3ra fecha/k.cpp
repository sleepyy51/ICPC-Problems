#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
using vi = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sl '\n';

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll r1 = b-a;
    ll r2 = d-c;

    cout<<r1+r2<<sl;
}

signed main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    while (T--) solve();
}