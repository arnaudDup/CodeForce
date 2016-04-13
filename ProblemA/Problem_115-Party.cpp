#include <iostream>
#include <map>
#include <string>
#include <vector>

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

// we search to get the size of the graph.
int main(){
    // getting useful data
    int a ; cin >> a;
    vi relation (a+1,0);
    int max = 1;
    
    FOR(i,a){cin >> relation[i+1];}
    
    REP(it,1,relation.size()-1)
    {
        int sizeChain = 1;
        int temp = relation[it];
        while (temp != -1){temp = relation[temp]; sizeChain++;}
        if (sizeChain > max) max = sizeChain;
    }
    aff(max)
    
    return 0;
    
}
