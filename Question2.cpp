#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int i=0,N=0;
    int profit=0 ;
    int bought_share = 0;
    bool previously_bought= false;
        
       cin>> N;
    
    int share[N]={0};
    
    for(i=0;i<N;i++)
    {
        cin>>share[i];
    }
    
     for(i=0;i<N;i++)
    {
        if(previously_bought)
        {
        if(share[i+1]<share[i] || i==N-1)
        {
         profit+=share[i]-bought_share;
        // cout<< profit;
         bought_share=0;
         previously_bought=false;
         continue;
        }
        continue;
        }
        
        else if(!previously_bought)
        {
         if(share[i+1]>share[i] && share[i-1]>share[i])
         {
         previously_bought=true;
         bought_share = share[i];
        // cout<< bought_share<<endl;
         }
         
         else{
         
         continue;
         }
        }
        
    }
    cout<<profit;
    return 0;
    }
    
