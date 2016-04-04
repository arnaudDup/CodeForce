#include <iostream>
#include <map>
#include <set>

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
    
    
    //  definition data useful for the problems.
    // A array wwill probably more efficient here.
    map<ll,ll> mapp;
    multiset <ll> sett;
    ll res = 0;
    
    // getting data for problems.
    ll a; cin >> a;
    FOR(i,a)
    {
        ll en; cin >> en;
        sett.insert(en);
        map <ll, ll> :: iterator it;
        // if integer are not already present in the data structure.
        if((it = mapp.find(en)) == mapp.end())
            mapp.insert(pair<ll,ll> (en, 1));
        // data are already here.
        else
            it->se++;
    }
    
    FOREACH(it,mapp){
        map <ll, ll> :: iterator ite;
        // we search the opposite number and pay attention if integer have already served in a couple.
        if((ite = mapp.find(-(it->first))) != mapp.end() && sett.find(-(it->first)) != sett.end()){
            if(it->fi == 0){
                res += it->se * (it->se - 1) / 2;
                sett.erase(it->fi);
            }
            else{
                res += it->se * ite->se;
                sett.erase(it->fi);
            }
        }
    }
    
    
    aff(res);
    return 0;
    
}
