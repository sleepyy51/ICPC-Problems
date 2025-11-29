#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
using vi = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sl '\n';

void solve(){
    int ini, tar, brt;
    cin>>ini>>tar>>brt;
    int act = ini;
    int n = 1;
    while (act>tar)
    {
        act = ini * pow(((brt-1)/brt), n);
        n++;
    }
    cout<<n<<sl;
}

signed main(){
    ios::sync_with_stdio(0); cin.tie(0);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    int T; cin >> T;
    while (T--) solve();
}