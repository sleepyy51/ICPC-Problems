#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
using vi = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
    ll x, k;
    cin>>x>>k;

    ll actual = x;
    ll anterior = x;
    ll aux = 0;

    ll i = 1;

    while(true){
        if(actual >= k){
            cout << i << "\n";
            return;
        }
        aux = actual;
        actual+=anterior;
        anterior = aux;
        i++;
    }

}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
     //solve(t);
    return 0;
}