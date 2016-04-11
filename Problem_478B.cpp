#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

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
    
    // getting useful data
    ll n; scanf("%lld", &n); ll m ; scanf("%lld", &m);
    ll mini(0), maxi(0);
    
    // getting the maximum of pair of the connex graph (n*n-1)/2 if all vertex are linked.
    ll res = n - m + 1;
    maxi = (res*(res-1)/2);
    
    // getting the min.
    ll modulo =  n % m;
    // first of all we make group of E(n/m) personnes, to finish with inf value (n/m)
    mini = ((modulo * (n / m + 1) * (n / m) / 2) + ((m - modulo) * (n / m) * (n / m - 1) / 2));
    
    // print the result
    printf("%lld %lld",mini, maxi);
    
    return 0;
}
