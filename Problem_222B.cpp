#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

#define REP(i,a,b) for (int i = (a); i <= (b); ++i)
#define REPD(i,a,b) for (int i = (a); i >= (b); --i)
#define FORI(i,n) REP(i,1,n)
#define FOR(i,n) REP(i,0,int(n)-1)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define ll long
#define SZ(x) int((x).size())
#define DBG(v) cerr << #v << " = " << (v) << endl;
#define FOREACH(i,t) for (__typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define fi first
#define se second
#define aff(x) cout << x << endl;
#define get(x) cin >> x;

// Funtion allowing swaping betwen array elements.
// Be careful on the reference.
/*
 void swapVec(vi & vec, long a , long b )
 {
 int temp = vec [a];
 vec [a] = vec [b];
 vec [b] = temp;
 }
 */
int main(){
    
    // getting useful data
    long a,b,c; scanf("%ld %ld %ld", &a, &b, &c);
    
    // declarating useful data
    vi vec ;
    long tab [a][b];
    
    // full the array
    FOR(i,a){
        FOR(j,b){
            long en; scanf("%ld", &en);
            tab[i][j] = en;
        }
        scanf("\n");
    }
    
    
    // help to remining the index.
    FOR(i,a){vec.pb(i);}FOR(i,b){vec.pb(i);}
    
    FOR(it,c){
        
        char r;long x,y; scanf("%c %ld %ld\n", &r, &x, &y);
        //cout << r <<" "<< x <<" "<< y << endl;
        
        switch(r){
                
            case 'g':
                printf("%ld\n",tab[vec[x-1]][vec[a+y-1]]);
                break;
                
                // we swap colum
            case 'c':
            {int temp1 = vec [a+x-1];vec [a+x-1] = vec [a+y-1]; vec [a+y-1] = temp1;}
                break;
                
                // we swap row.
            case 'r':
            {int temp2 = vec [x-1]; vec [x-1] = vec [y-1]; vec [y-1] = temp2;}
                break;
                
        }
    }
    
    
    return 0;
}

