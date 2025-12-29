    #include <bits/stdc++.h>
    using namespace std;
    #define FOR(i,a,b) for (int i = (a); i < (b); i++)
    #define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
    #define FORE(i, a) for(auto i : a) //Solo lectura
    #define FORR(i, a) for(auto &i : a) //Modificación
    #define vt vector
    #define fi first
    #define se second
    #define sz(v) ((int)(v).size())
    #define all(v) (v).begin(),(v).end()
    #define erase_duplicates(x) x.erase(unique(all(x)),x.end());
    #define sl '\n';
    #define lb lower_bound
    #define ub upper_bound

    using ull = unsigned long long;
    using ll = long long;
    using ld = long double;

    using pi = pair<int,int>;
    using pl = pair<ll,ll>;

    using vi = vt<int>;
    using vc = vt<char>;
    using vl = vt<ll>;
    using vd = vt<double>;
    using vs = vt<string>;
    using vpi = vt<pi>;
    using vpl = vt<pl>;
     
    const int dx[8]  = {-1,-1,-1, 0,0, 1,1,1};
    const int dy[8]  = {-1, 0, 1,-1,1,-1,0,1};
    const int d4x[4]  = {-1, 0, 0,1};
    const int d4y[4]  = {0, 1,-1, 0};

    const double PI = acos(-1.0);
    const int INF = 1e9;
    const int INFNEG = -INF;
    const ll MOD = 1000000007LL;
    const double EP = 1E-10;
    const int mxN = 1e5;

    template<class T> inline ll modpow(ll a, ll b, ll m = MOD){ ll r=1; for(;b;b>>=1,a=a*a%m) if(b&1) r=r*a%m; return r; }
    template<class T> int lwb(vt<T>& a, const T& b) { return int(lb(all(a),b)-begin(a)); }
    template<class T> int upb(vt<T>& a, const T& b) { return int(ub(all(a),b)-begin(a)); }   
    template <typename T> std::istream& operator>>(std::istream& input, std::vector<T>& data){ for(T& x : data)input >> x;return input;}
    template <typename T> std::ostream& operator<<(std::ostream& stream, const vector<T>& vec){ for(size_t i = 0; i < vec.size(); i++){stream << vec[i];if(i != vec.size() - 1)stream << ' ';}; return stream; }
    template<class T> bool umin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
    template<class T> bool umax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
    template<class T> inline ll sum(T n) { ll k = (ll)(n); return k * (k + 1) / 2; } //Sumatoria de 1 a n;
    template<class T> inline ll lcm(T a, T b) { ll x = (ll)a, y = (ll)b; return x / std::gcd(x, y) * y; } //MCD
    bool myCompare(pair<char,int> p1, pair<char,int> p2){return p1.fi>p2.fi;}
    #ifdef LOCAL
    #define deb(x) cout << #x << ": "<< x << '\n';
    #else
    #define deb(x)
    #endif

    void solve(){
        
    }

    int main(){
        ios::sync_with_stdio(0); cin.tie(0);
        #ifdef VJ
        freopen("i.txt","r",stdin);
        freopen("o.txt","w",stdout);
        #endif

        int t = 1, i = 0;
        cin >> t;    
        while (t--){
            //cout<<"Case "<<++i<<": "<<sl;
            solve();
        }
    } 

    
   //Per aspera ad astra
   //Hic sunt leones
   //Rise so high in mud you lie