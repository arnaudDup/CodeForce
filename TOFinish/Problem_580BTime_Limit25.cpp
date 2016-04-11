#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstdlib>

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
#define fi first
#define se second
#define aff(x) cout << x << endl;


int main(){
    
    // contain the graph and the value.
    vector< pii > v1; 
    ll diff (0);
    ll max (0);
    // geting useful data.
    int a; scanf("%d %lld", &a, &diff);
    FOR(i,a){
        int en,val; scanf("%d %d", &en, &val);
        v1.pb( mp(en,val));
    }

    sort(v1.begin(), v1.end());

    // We iterate on the vector, vector is already sorted.
    ll i = 0;
    ll j = 0;
    
    while( i < v1.size()){  
        
        ll sum (0);
        j = i+1;
        sum += v1[i].se;
        
        while( j < v1.size() && abs((v1[i].fi) - v1[j].fi) < diff ){
            sum += v1[j].se; j++;
        }
        
        if(sum > max)
            max = sum;
        
        i++;
    }
    // print the best solution.
    printf("%lld\n",max);
    return 0; 
}
