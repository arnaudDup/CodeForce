#include <vector>
#include <algorithm>
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



int main()
{
    // describe the graph, (list adjacence)
    multimap <int, set <int> > mapp;
    multiset <int> sett;
    int res = 0;
    
    // getting data
    int a = 0 ; cin >> a;
    FOR(i,a)
    {
        int b; cin >> b;
        set <int> c;
        mapp.insert(pair <int,set<int> >(b,c));
    }
    
    
    int b = 0 ; cin >> b;
    FOR(i,b)
    {
        int d; cin >> d;
        
        // getting different possible results.
        sett.insert(d);
        
        // if d is a correct value, we add to the set.
        FOREACH(it,mapp)
        {
            if( it->fi == d || it->fi == d + 1 || it->fi == d - 1 )
                it->se.insert(d);
        }
    }
    
    
    // if d is a correct value, we add to the set.
    FOREACH(ite,mapp)
    {
        FOREACH(it,ite->se)
        {
            // if *it is a possible anwser, we put it in the set.
            if(sett.find(*it) != sett.end())
            {
                sett.erase(sett.find(*it));
                res ++;
                break;
            }
        }
    }
    
    cout << res << endl;
    return 0;
}