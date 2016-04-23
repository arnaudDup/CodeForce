#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

#define pb push_back
#define vi vector <int>
#define ll long long
#define REP(i,a,b) for (int i = (a); i <= (b); ++i)
#define REPD(i,a,b) for (int i = (a); i >= (b); --i)
#define FORI(i,n) REP(i,1,n)
#define FOR(i,n) REP(i,0,int(n)-1)

int main(){
    
    string a; cin >> a;
    vi result(a.size(),0);
    vi inverse(a.size(),0);
    FOR(i,a.size()){result[i] = (int) (a[i] - '0');}
    FOR(i,a.size()){inverse[i] = 9 - result[i];}
    
    int indice = 0;
    // we eliminate worthless zero
    if(result[indice] == 0 || inverse[indice] == 0 ){
        indice++;
        cout << max(result[0],inverse[0]);
    }
    
    if(indice < a.size())
    {
        for(int i = indice; i < a.size(); i++){
            if(result[i] < inverse[i]){cout << result[i];}
            else {cout << inverse[i];}
        }
    }
    
}
