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
    
    // getting data
    ll a; cin >> a;
    FOR(i,a){ ll en; scanf("%lld", &en); data.pb(en);}
    
    // Sorting the vector.
    sort(data.begin(), data.end());
    
    ll maxi = data[a - 1];
    ll mini = data[0];
    ll nbMini (1);
    ll nbMaxi (1);
    ll res(0);
    
    // if numbers are differents
    if( mini != maxi ){
        
        FOR(i, data.size()-1){
            if(data[i+1] == mini)
                nbMini ++;
            else break;
        }
        REPD(ii,a - 1,0){
            if (data[ii-1] == maxi)
                nbMaxi++;
            else break;
        }
        
        
        res = nbMini * nbMaxi;
    }
    
    // if all numbers are equals.
    else
        res = (a * (a-1) )/ 2;
    
    
    // print the result.
    printf("%lld ",data[data.size() - 1] - data[0]);
    printf("%lld \n",res);
    return 0;
}
