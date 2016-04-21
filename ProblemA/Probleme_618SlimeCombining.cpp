#include<iostream>
#include<vector>
using namespace std;

#define pb push_back
#define vi vector <int>

vi response;
int main(){
    int a; cin >> a;
    while(a != 0){	
    	int current = 1;
        while(current == response.back()){
        	response.erase(i);
        	response.back()++;
        	if(response.size() >= 2){current = response[response.size()-2];} 
        	else current = response.back()++; 
        }
    }

    for(int i = 0; i < response.size(); i++)
    {
    	cout << response[i] << " "; 
    }
    return 0;

}
