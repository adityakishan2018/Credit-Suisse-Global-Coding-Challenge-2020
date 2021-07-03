#include<bits/stdc++.h>
#include<map>
#include<iostream>
using namespace std;


int main() {
	

  
	// Write your code here
    int i=0,j=0,N=0,k=0,D=0;
    
        
       cin>> N >> D;
    
   long int share[N]={0};
   long int profit[D]={0};
    
    for(i=0;i<N;i++)
    {
        cin>>share[i];
    }
    
    for(i=0;i<D;i++)
    {
        cin>>profit[i];
    }
    
    for(i=0;i<D;i++)
    {
    	
    	map<int,int>mymap;
    	
      for(j=0;j<N;j++)
      {
      	
      	
      	
      	for(k=j+1;k<N;k++)
      	{
      		if(share[j]+profit[i]==share[k] )
      		{
      				//min_index=k;
      			
      	        //cout<<"k";
      	        
      	        
      	        
      	        
			   		mymap[j+1]=k+1;
			   	//	mymap.insert(make_pair(j+1,k+1));
			   	break;
			  }
			 
      		
      	}
      	
      	
      	
			  
			  
			  	/*min_index=k;
			  	min_diff=k-j;
			  	start = j;*/
			  	//map<int, int>::iterator it;
			  	
			 
		           
			  	 
			  
      	
			  	
			  
 
 
                


 
                 
			   	
      		//	break;
			   
			  	
			  
      	
   }
   
   
   
   if(mymap.empty())
    {
    cout<<"-1";
    if(i!=D-1)
	 {
	 cout<<",";
	   }
    continue;
    
    }
    
    
    
        long int minV = 100000;
        long int minK=0;
         long int tempV=0;
        long  int tempK=0;
        // int hey=0;
         //map<int, int>::iterator itr; 
         //cout<<itr->first;
         //int l=0;
    	for(map<int,int>::iterator it=mymap.begin();it!=mymap.end();it++)
                       	{
                       		
                      			//cout<<it->first<<" "<<it->second;
                      		//	hey=it->second;
                      			tempK=minK;
                      			tempV=minV;
                      			if(it->second<=minV)
                      			{
                      				minV= it->second;
                      				minK = it->first;
								  }
                       			
							   // break;
	                  	
                        	}
                        	
                        	if(minV!=tempV)
                        	{
                        		cout<<minK<<" "<<minV;
							}
							if(minV==tempV && minV-minK <= tempV-tempK)
							{
								cout<<minK<<" "<<minV;
								
							}
							else if (minV==tempV && minV-minK >= tempV-tempK)
					
							{
								cout<<tempK<<" "<<tempV;
								
							}                        	
                        	
                        	//cout<<minK<<" "<<minV;
	
			 // cout<<j+1<<" "<<k+1;
			 //cout<<mymap.begin()->second<<" "<<mymap.begin()->first;
      			 if(i!=D-1)
      			 {
      			 	cout<<",";
				   }
   
}
return 0;
}
