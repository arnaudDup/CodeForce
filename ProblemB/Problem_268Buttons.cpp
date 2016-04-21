#include <cstdio>
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
    
    ll n,x; scanf("%lld %lld",&n, &x);
    vector<ll> chapter(n,0);
    ll sumHours(0);
    // getting useful data
    FOR(i,n){scanf("%lld",&chapter[i]);}
    sort(chapter.begin(), chapter.end());
    FOR(i,n){if (x>1) sumHours += x-- * chapter[i];else sumHours += chapter[i];}
    printf("%lld",sumHours);
    return 0;
}
