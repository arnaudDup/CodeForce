#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <set>
using namespace std;

#define pb push_back
#define vi vector <int>
#define ll long long
#define REP(i,a,b) for (int i = (a); i <= (b); ++i)
#define REPD(i,a,b) for (int i = (a); i >= (b); --i)
#define FORI(i,n) REP(i,1,n)
#define FOR(i,n) REP(i,0,int(n)-1)
#define ps pair<string,string>

// number of double '.'
int res = 0;

// we find the result before begining the operation.
int count (string & data){
    FOR(i,data.size()-1){
        if (data[i] == '.' && data[i+1] == '.'){
            res++;
        }
    }
    return res;
}

int main(){
    
    int n,m; cin >> n >> m ;
    string data; cin >> data;
    int sum = count(data);
    
    FOR(i,m){
        int a;char b; cin >> a >> b;
        // allowing to go between [0,data.size()]
        a--;
        if( b == '.' and data[a] != '.' ){
            if(a>0){
                if(data[a-1]=='.')
                    sum++;
            }
            if(a < data.size()-1{
                if(data[a+1]=='.')
                    sum++;
            }
        }
        
        else if (b != '.' and data[a] == '.'){
            if(a>0){
                if(data[a-1]=='.')
                    sum--;
            }
            if(a<data.size()-1){
                if(data[a+1]=='.')
                    sum--;
            }
        }
        data[a] = b;
        cout<<sum<<endl;
    }
}

