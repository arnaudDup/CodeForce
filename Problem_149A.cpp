#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define REP(i,a,b) for (int i = (a); i <= (b); ++i)
#define REPD(i,a,b) for (int i = (a); i >= (b); --i)
#define FORI(i,n) REP(i,1,n)
#define FOR(i,n) REP(i,0,int(n)-1)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define ll long
#define SZ(x) int((x).size())
#define DBG(v) cerr << #v << " = " << (v) << endl;
#define FOREACH(i,t) for (__typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define fi first
#define se second
#define aff(x) cout << x << endl;
#define get(x) cin >> x;


int main(){
    
    // getting useful data
    int a; get(a)
    vi v;
    FOR(i, 12)
    {
        int en; get(en)
        v.pb(en);
    }
    
    sort(v.begin(), v.end());
    
    int res(0);
    int count = 0;
    for (int i = v.size() - 1  ; i >= 0 ; i-- )
    {
        if(res >= a)
            break;
        else{res += v[i]; count ++; }
    }
    
    if (res >= a)
        aff(count)
        else
            aff(-1)
            
            
            return 0;
}

