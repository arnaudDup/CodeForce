#include <iostream>
#include <map>
#include <set>
#include <algorithm>
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

bool comp (pii i,pii j) {return (i.fi < j.fi); }

// we search to get the size of the graph.
int main(){
    // getting useful data
    string data; cin >> data;
    int a ; cin >> a;
    int valueAlph [26];
    int maxValue = 0;
    ll res(0);
    int position (1);
    FOR(i,26){cin >> valueAlph[i];}
    FOR(i,26){if(valueAlph[i] > maxValue) maxValue = valueAlph[i];}
    FOR(i,data.size()){int temp = int (data[i] - 97);res += valueAlph[temp] * position++;}
    FOR(i,a){res += maxValue * position++;}
    aff(res)
    return 0;
    
}
