#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <map>
using namespace std;

#define pb push_back
#define vi vector <int>
#define ll long long
#define REP(i,a,b) for (int i = (a); i <= (b); ++i)
#define REPD(i,a,b) for (int i = (a); i >= (b); --i)
#define FORI(i,n) REP(i,1,n)
#define FOR(i,n) REP(i,0,int(n)-1)
#define ps pair<string,string>

int main(){
    
    int res = 0;
    int a; cin >> a;
    vi data (1001,0);
    
    // allowing to avoid sorting datas.
    FOR(i,a){int temp; cin >> temp ; data[temp]++;}
    
    // We lopp until we don't have deal with each values.
    for(;;){
        int resTemp = 0;
        if (a == 0) break;
        
        // we try to make the longuest increasing sequence.
        FOR(i,data.size()){
            if(data[i]){
                resTemp++;
                data[i]--;
                a--;
            }
        }
        // add result, minus 1 because we compute the last values.
        res += resTemp - 1 ;
        
    }
    cout << res ;
}
