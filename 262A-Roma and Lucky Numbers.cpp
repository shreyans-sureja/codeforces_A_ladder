#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
typedef pair<double, ll> pdl;
typedef vector<ll> vll;
#define ff first
#define ss second
#define pb(x) push_back()
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld%lld",&x,&y)
#define slll(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define pl(x) printf("%lld\n",x)
#define mp make_pair
ll mod=(ll)1e9+7;
const ll INF = (ll)1e18;
#define all(x) x.begin(),x.end()
#define s(x) ((ll)x.size())
#define tc ll t; cin>>t; while(t--)
#define FOR(i,j,n) for(ll i=j;i<n;i++)
#define ig cin.ignore()
#define fast_cin ios_base::sync_with_stdio(false)
ll power(ll a, ll b) {ll ret=1;while(b) {if(b&1) ret*=a;a*=a;if(ret>=mod) ret%=mod;if(a>=mod) a%=mod;b>>=1;}return ret;}
ll inv(ll x) {return power(x,mod-2);}
#define run(m) for(auto it=m.begin(); it!=m.end(); it++)
/*---------------------------------------------------------//
const int MAXM = 1e7+3010;   ll fact[MAXM];
void factorial(){ fact[0]=1;FOR(i,1,MAXM) fact[i]=(fact[i-1]*i)%mod;}
ll nCr(ll n,ll r){return ((fact[n])*(((inv(fact[r]))*(inv(fact[n-r])))%mod))%mod;}
// freopen("Task.in","r",stdin);freopen("Task.out","w",stdout);
//-------------------------------------------------------------------/*/

bool checker(ll x,ll k){
    ll cnt=0;
    while(x){
        ll p = x%10;
        x /= 10;
        if(p==4 || p==7)
            cnt++;
    }
    if(cnt>k)
        return false;
    return true;
}

int main() {
    fast_cin;
    ll n,k,x,cnt=0;  cin >> n >> k;

    while(n--){
        cin >> x;
        if(checker(x,k))
            cnt++;
    }

    cout << cnt << "\n";
}
