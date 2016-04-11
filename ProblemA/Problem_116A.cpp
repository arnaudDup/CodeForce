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
    
    int a; scanf("%d", &a);
    
    int current(0);
    int max(0);
    
    FOR(i,a){
        int diff (0);
        int ai, bi; scanf("%d %d",&ai, &bi );
        diff = bi - ai;
        current += diff;
        if(max < current)
            max = current;
    }
    
    printf("%d", max);
}
