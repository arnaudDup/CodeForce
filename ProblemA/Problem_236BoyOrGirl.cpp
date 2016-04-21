#include <iostream>

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


// we search to get the size of the graph.
int main(){
    
    // gettin useful data.
    string name; cin >> name;
    int alpha[26] = {0};
    int res(0);
    
    FOR(i,name.size()){alpha[((int) name[i]) - 97]++;}
    FOR(it,26) {
        if (alpha[it] > 0){res++;}
    }
    
    if (res % 2 == 0) aff("CHAT WITH HER!")
        else aff("IGNORE HIM!")
            
            return 0;
    
}
