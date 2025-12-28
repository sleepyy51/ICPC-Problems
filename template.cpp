    #include <bits/stdc++.h>
    #define FOR(i,a,b) for (int i = (a); i < (b); i++)
    #define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
    #define FORE(i, a) for(auto i : a) //Solo lectura
    #define FORR(i, a) for(auto &i : a) //Modificación
    #define vt vector
    #define pb push_back
    #define sz(v) ((int)(v).size())
    #define all(v) (v).begin(),(v).end()
    #define erase_duplicates(x) x.erase(unique(all(x)),x.end());
    #define fi first
    #define se second
    #define deb(x) cout << #x << ": "<< x << '\n';
    #define sl '\n';
    #define lb lower_bound
    #define ub upper_bound
    using namespace std;

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
     
    template<class T> int lwb(vt<T>& a, const T& b) { return int(lb(all(a),b)-begin(a)); }
    template<class T> int upb(vt<T>& a, const T& b) { return int(ub(all(a),b)-begin(a)); }   
    template <typename T> std::istream& operator>>(std::istream& input, std::vector<T>& data){ for(T& x : data)input >> x;return input;}
    template <typename T> std::ostream& operator<<(std::ostream& stream, const vector<T>& vec){ for(size_t i = 0; i < vec.size(); i++){stream << vec[i];if(i != vec.size() - 1)stream << ' ';}; return stream; }
    template<class T> bool umin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
    template<class T> bool umax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
    template<class T> inline ll sum(T n) { ll k = (ll)(n); return k * (k + 1) / 2; } //Sumatoria de 1 a n;
    template<class T> inline ll modpow(T a, ll b, ll m = MOD) { ll r = 1, x = (ll)a % m; while (b) { if (b & 1) r = r * x % m; x = x * x % m; b >>= 1;}return r;}
    template<class T> inline ll lcm(T a, T b) { ll x = (ll)a, y = (ll)b; return x / std::gcd(x, y) * y; } //MCD
    bool myCompare(pair<char,int> p1, pair<char,int> p2){return p1.fi>p2.fi;}

    const int dx[8]  = {-1,-1,-1, 0,0, 1,1,1};
    const int dy[8]  = {-1, 0, 1,-1,1,-1,0,1};
    const int d4x[4]  = {-1, 0, 0,1};
    const int d4y[4]  = {0, 1,-1, 0};
    const double PI = acos(-1.0);
    const int INF = 1e9;
    const int INFNEG = -INF;
    const ll MOD = 1000000007LL;
    const double EP = 1E-10;
    const ll LINF = 4e18;
    const ll LINFNEG = -LINF;
    const int mxN = 1e5;

    #ifdef LOCAL
    #define dbg(...) cerr<<"["<<#__VA_ARGS__<<"]: ",dbg_out(__VA_ARGS__)
    #else
    #define dbg(...)
    #endif
    inline void dbg_out(){cerr<<'\n';}
    template<class T,class...A> inline void dbg_out(T x,A...a){cerr<<x<<(sizeof...(a)?' ':'\n'); if constexpr(sizeof...(a)) dbg_out(a...);}

    void solve(){
        
    }  

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        #ifdef VJ
        freopen("i.txt","r",stdin);
        freopen("o.txt","w",stdout);
        #endif

        int t = 1, i = 0;
        // cin >> t;    
        while (t--){
            // cout<<"Case "<<++i<<": ";
            solve();
        }
    } 

    
   //Per aspera ad astra
   //Hic sunt leones
   //Rise so high in mud you lie