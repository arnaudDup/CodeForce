#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int comp (vector<int> a, vector <int> b)
{
    // be careful b.size() is the minimum
    for(int k = 0; k < b.size() ; k++)
    {

        if(a[k] != b[k])
        {
            return a[k];
        }
    }
    return a.back();
    
}

int main()
{
    // reading number line
    int a; cin >> a;
    
    vector<int> b,c,d;
    
    // getting the data
    for (int j = 0 ; j < 3; j++)
    {
        for( int i = 0; i < a - j  ; i ++ )
        {
            int entier; cin >> entier;
            switch (j)
            {
                    
                case 0 :
                    b.push_back(entier);
                    break;
                    
                case 1 :
                    c.push_back(entier);
                    break;
                    
                case 2 :
                    d.push_back(entier);
                    break; 
            }
        } 
    }
    
    
    sort(b.begin(), b.end()); 
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    
    cout << comp(b,c) << endl; 
    cout << comp(c,d) << endl;
    
}
