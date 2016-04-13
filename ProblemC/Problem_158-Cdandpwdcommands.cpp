#include <iostream>
#include <vector>
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
#define aff(x) cout << x  << " ";

int main(){
    
    vector <string> path;
    int a; cin >> a;
    FOR(i,a){
        string temp; cin >> temp;
        if(temp == "cd" ){ string currentpath; cin >> currentpath;
            string te = "";
            int begin = 0;
            if(currentpath[0] == '/') {
                begin = 1;
                path.clear();
            }
            REP(ite,begin,currentpath.size()){
                if (currentpath[ite] == '/' || ite == (currentpath.size()-1)){
                    if (ite == (currentpath.size()-1))te += currentpath[ite];
                    if (!te.compare("..")){path.erase(path.end()-1);te = "";}
                    else {path.pb(te);te = "";}
                }
                else te += currentpath[ite];
            }
        }
        else if(temp == "pwd" ){
            // initiate the root;
            cout << "/";
            FOR(it,path.size()){cout << path[it] << "/";}
            cout << endl;
        }
    }
    
}
