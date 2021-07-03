#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int i=0,j=0,N=0;
    int profit=0 ;
    int max=0;
    int max_profit=0;
    int new_profit=0;
        
       cin>> N;
    
    int arr[N]={0};
    
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<N;i++)
    {
       
        max= *max_element(arr + i, arr + N);
      //  cout<<max;
        
       new_profit= max-arr[i];
       // cout<<new_profit<<endl;
        if(new_profit> max_profit)
        {
            max_profit=new_profit;
           // cout<<max_profit;
        }
        
    }
   cout<<max_profit;
    return 0;
    
}
