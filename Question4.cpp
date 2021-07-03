#include<bits/stdc++.h>
#include <numeric>
using namespace std;



int main(){


    int n=0, m=0, i=0;
   
    cin >> n >> m;
    double p[n]={0}, x[n]={0}, y[n]={0};
    double result[n]={0};
    double final_r = 0;

    for(int i = 0; i < n; i++)
        cin >> p[i];
    for(int i = 0; i < n; i++)
        cin >> x[i];
    for(int i = 0; i < n; i++)
        cin >> y[i];

    
    
    for(i=0;i<n;i++)
    {
    
      if(p[i]*x[i] - ((1-p[i])*y[i])>0)
      {
      result[i]=p[i]*x[i] - ((1-p[i])*y[i]);
      
      }
      else{
            continue;
      }
    }
    
      sort(result, result+n, greater<double>());
     final_r = accumulate(result, result+m, final_r);
     
    
    cout <<fixed << setprecision(2) << final_r << endl;
    

    return 0;
}
