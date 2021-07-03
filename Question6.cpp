#include <bits/stdc++.h>
#include<math.h>
using namespace std;

// Function to remove all spaces from a given string 
string removeSpaces(string str)  
{ 
    str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
    return str; 
} 
 




int main() {
    string words;
    int row=0;
    int col=0;
    int i=0,j=0;
    
    getline(cin, words);
    
    ; 
    words = removeSpaces(words); 
    int str_size = words.size();


   // cout<<str_size;
    int Fl=floor(sqrt(str_size));
    int Cl=ceil(sqrt(str_size));
    
    if(Fl*Cl>=str_size)
    {
    	row=Fl;
    	col=Cl;
	}
	
	else
	{
		row=Cl;
		col=Cl;
	}	
	
	string new_arr[row][col];
	int k=0;
	
	//cout<<row<<" "<<col;
	for(i=0;i<row;i++)
	{  
	    
		for(j=0;j<col;j++)
		{
			if(words[k]!='\0')
			{
				new_arr[i][j]=words[k];
		    	k++;
			}
			
		}
	}
	
	for(i=0;i<col;i++)
	{  
	    
		for(j=0;j<row;j++)
		{
			cout<<new_arr[j][i];
		}
		cout<<" ";
	}
	


    return 0;
}
