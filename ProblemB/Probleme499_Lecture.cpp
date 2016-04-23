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
    
    // inititate useful variable.
    int a,b; cin >> a >> b;
    map<string,string> data;
    vector <string> courses (a," ");
    map <string, string> :: iterator it;
    
    // getting values.
    FOR(i,b){string fi,se; cin >> fi >> se; data.insert(ps(fi,se));}
    FOR(i,a){cin >> courses[i];}
    
    // print solution.
    FOR(i,a){
        it = data.find(courses[i]);
        if(it->first.size() > it->second.size())
            cout << it->second << " ";
        else
            cout << it->first << " ";
    }
}
