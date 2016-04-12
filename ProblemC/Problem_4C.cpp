#include <cstdio>
#include <iostream>
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
#define ll long long
#define SZ(x) int((x).size())
#define DBG(v) cerr << #v << " = " << (v) << endl;
#define FOREACH(i,t) for (__typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define fi first
#define se second
#define aff(x) cout << x  << " ";


int main(){
    
    // mapping between name and number in the database
    map <string,int> mapp;
    map <string,int> :: iterator it;
    int nb; scanf("%d",&nb);
    
    FOR(i,nb)
    {
        // we use getline, more easy to manipulate strings.
        string name; cin >> name;
        // the name is free
        if((it = mapp.find(name)) == mapp.end()) {mapp.insert(mp(name,1)); puts("OK");}
        // the name is already taken
        else {cout << it->fi << it->se++ << endl; }
    }
    return 0;
}

