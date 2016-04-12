#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define REP(i,a,b) for (int i = (a); i <= (b); ++i)
#define REPD(i,a,b) for (int i = (a); i >= (b); --i)
#define FORI(i,n) REP(i,1,n)
#define FOR(i,n) REP(i,0,int(n)-1)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define ll long long
#define SZ(x) int((x).size())
#define DBG(v) cerr << #v << " = " << (v) << endl;
#define FOREACH(i,t) for (__typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define fi first
#define se second
#define aff(x) cout << x  << " ";


int main(){
    
    // intiate useful data.
    vector<ll> data;
    ll sum(0);
    ll localSum;
    ll nbCoins (0);
    // getting data
    ll a; cin >> a;
    FOR(i,a){ ll en; scanf("%lld", &en); data.pb(en); sum+=en ;}
    ll reachVal = (sum/2)+1;
    
    sort(data.begin(), data.end());
    
    for (ll i = a-1; i >= 0; --i){
        localSum += data[i];
        nbCoins ++;
        if(localSum >= reachVal)
            break;
    }
    
    cout << nbCoins;
}

