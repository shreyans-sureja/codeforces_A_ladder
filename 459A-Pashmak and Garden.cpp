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

int main(){
    fast_cin;
    pair<ll,ll>p[4];
    ll x,y;

    cin >> p[0].first >> p[0].second;
    cin >> p[1].first >> p[1].second;

    if(p[0].first==p[1].first){
        ll diff = abs(p[0].second - p[1].second);
        cout << p[0].first + diff << " " << p[1].second << " " << p[0].first + diff << " " <<  p[0].second << "\n";
    }
    else if(p[0].second == p[1].second){
        ll diff = abs(p[0].first - p[1].first);
        cout << p[0].first << " " << p[0].second + diff << " " << p[1].first << " " <<  p[0].second + diff << "\n";
    }
    else{
        p[2].first = p[0].first;
        p[2].second = p[1].second;

        p[3].first = p[1].first;
        p[3].second = p[0].second;

        auto temp1 = p[2], temp2 = p[3];

        sort(p,p+4);

        ll horizontal =  pow(abs(p[2].first - p[0].first),2) + pow(abs(p[2].second - p[0].second),2);
        ll vertical =  pow(abs(p[3].first - p[2].first),2) + pow(abs(p[3].second - p[2].second),2);

        if(horizontal!=vertical)
            cout << "-1\n";
        else
            cout << temp1.first << " " << temp1.second << " " << temp2.first << " " << temp2.second << "\n";
    }
}
