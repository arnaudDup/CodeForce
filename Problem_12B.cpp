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
    
    
    //  definition data useful for the problems.
    // initialized array.
    char tab[10] = {0};
    string sol = "";
    int nonZero = 10;
    
    // getting data for problems.
    string a; cin >> a;
    string b; cin >> b;
    FOR(i,a.size())
    {
        tab[a[i] - 48] ++;
        
        // we search the minimum integer of the string different of 0.
        if( nonZero > a[i] - 48  && a[i] - 48 != 0 )
            nonZero = a [i] - 48;
        
    }
    
    //remove the minimum
    if (nonZero != 10){
        char c = '0' + nonZero ;
        sol += c;
        tab[nonZero]--;
    }
    
    // build the anwser string.
    REP(i,0,9){
        if (tab[i] != 0){
            char c = '0' + i ;
            FOR(j, tab[i]){sol += c;}
        }
    }
    
    if(sol == b){
        
        aff("OK")
    }
    else{
        aff("WRONG_ANSWER")
    }
    
}
