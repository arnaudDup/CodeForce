#include <iostream>
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


// we search to get the size of the graph.
int main(){
    
    // getting useful data
    int n; cin >> n;
    // capacity to drink.
    int person [5] = {1,1,1,1,1};
    int i (0);
    // current person in front of machine drink.
    int current (0);
    while(i < n){
        current = current % 5;
        if( i + person[current] < n ) {i += person[current]; person[current]*=2; }
        else break;
        current ++;
    }
    
    if (current == 0)aff("Sheldon")
    if (current == 1)aff("Leonard")
    if (current == 2)aff("Penny")
    if (current == 3)aff("Rajesh")
    if (current == 4)aff("Howard")
        
    return 0;
    
}
