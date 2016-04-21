#include<iostream>
#include<vector>

using namespace std;

#define pb push_back
#define vi vector <int>
#define ll long long

ll A [3];
ll B [3];

int main(){
    
    cin >> A[0] >> A[1] >> A[2];
    cin >> B[0] >> B[1] >> B[2];
    int temp = 1;
    int temp1 = 2;
    
    
    for(int i = 0 ; i < 3 ; i++ ){
        
        
        while(A[i] < B[i]){
            
            if(A[temp]-2  >= B[temp] )
            {
                A[i]++; A[temp]-=2;
            }
            else if (A[temp1]-2 >= B[temp1])
            {
                A[i]++; A[temp1]-=2;
            }
            else break;
        }
        
        temp = (temp+1) % 3;
        temp1 = (temp1+1) % 3;
    }
    
    
    // print solution
    bool verif = true;
    for(int i = 0 ; i < 3 ; i++ ){if(A[i] < B[i])verif = false;}
    if (verif) cout << "yes";
    else cout << "no";
    
    return 0;
    
}

