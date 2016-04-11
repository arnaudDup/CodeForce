#include <iostream>
#include <map>
#include <set>
#include <string>
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
#define aff(x) cout << x << endl;


int main(){
    
    int a; cin >> a;
    int res = 0;
    
    FOR(i,a)
    {
        int b,c,d; cin >> b >> c >> d;
        int somme = b+c+d;
        if (somme > 1)
            res ++;
    }
    
    aff(res)
    
    return 0;
    
}
