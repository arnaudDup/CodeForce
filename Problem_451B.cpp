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
    
    // getting useful data
    ll a; cin >> a;
    vector<ll> data (a,0);
    FOR(i,a){scanf("%lld", &data[i]);}

    // intiate useful variable
    bool debut = false, fin = false, possible = true; 
    ll begin(1), end(0);

    for (int i = 1; i < a ; i++)
    {
        // catching the first number in bad order.
        if(data[i-1] > data[i] && debut == false){
            debut = true;
            begin = i; 
        } 
        // catching the last number of the sequence in the wrong order.
        if(data[i-1] < data[i] && debut == true && fin == false){
            fin = true; 
            end = i; 
        }
        // Verifing the end.
        if(data[i-1] > data [i] && fin == true){
            possible = false; 
            break; 
        }
    }

    if(fin == false) end = begin;
    if(fin == false && debut) end = a;

    if( (begin > 1 && data[begin - 2] > data[end - 1]) || 
        (end < a && data[begin - 1] > data[end]))
        {possible = false;}

    // Print sollutions. 
    if(!possible) puts("no"); 
    else {puts("yes"); printf("%lld %lld\n", begin, end);}

    return 0;
}
