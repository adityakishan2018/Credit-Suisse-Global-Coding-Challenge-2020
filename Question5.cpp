#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<string> split(const string& str, char delim) { 
    vector<string> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start); 
        strings.push_back(str.substr(start, end - start));
    }
    return strings; 
} 
  
vector<int> splitStringToInt(const string& str, char delim) {
    vector<int> strings; 
    size_t start;   
    size_t end = 0; 
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start); 
        strings.push_back(stoi(str.substr(start, end - start)));
    } 
    return strings;
}

int main() {
    int numOfBankers, numOfParticipants;
    vector<vector<int>> bankersPreferences, participantsPreferences;

    cin >> numOfBankers;

    string bankersPreferencesStr;
    cin >> bankersPreferencesStr;
    vector<string> bankersPreferencesVecByComma = split(bankersPreferencesStr, ',');

    for (vector<string>::const_iterator i = bankersPreferencesVecByComma.begin(); i != bankersPreferencesVecByComma.end(); ++i) {
        vector<int> bankerPreferenceVecByAnd = splitStringToInt(*i, '&');
        bankersPreferences.push_back(bankerPreferenceVecByAnd);
    }

    string participantsPreferencesStr;
    cin >> numOfParticipants;
    cin >> participantsPreferencesStr;
    vector<string> participantsPreferencesVecByComma = split(participantsPreferencesStr, ',');

    for (vector<string>::const_iterator i = participantsPreferencesVecByComma.begin(); i != participantsPreferencesVecByComma.end(); ++i) {
        vector<int> participantPreferenceVecByAnd = splitStringToInt(*i, '&');
        participantsPreferences.push_back(participantPreferenceVecByAnd);
    }

   // int result = calculateMinimumSession(numOfBankers, numOfParticipants, bankersPreferences, participantsPreferences);
  int decider[numOfBankers][numOfParticipants]={0};
   
    for(int i=0;i<participantsPreferences.size();i++)     
    {   
      for(int j=0;j<bankersPreferences.size();j++)
      { 
        decider[i][j]=0;
    }
   // cout<<endl;
   }
   
   
     memset(&decider, 0, sizeof decider);  
   // std::fill(decider, decider + sizeof decider, 0);
   
    for (int i = 0; i < bankersPreferences.size(); i++) {  
        for (int j = 0; j < bankersPreferences[i].size(); j++) 
        {
        	
            decider[bankersPreferences[i][j]-1][i]=1;
           
		}
            
       // cout << endl; 
    }
    
    
    for (int i = 0; i < participantsPreferences.size(); i++) { 
        for (int j = 0; j < participantsPreferences[i].size(); j++) 
        {
        	
       
            decider[i][participantsPreferences[i][j]-1]=1;
         
		}
            
        
    }
    

   
   
      int maxsum1 = 0;
     for(int i=0;i<participantsPreferences.size();i++) 
     {  
          int sum = 0;  
          
          for(int j=0;j<bankersPreferences.size();j++)
          {
               sum = sum + decider[i][j];
          }
          
           //sum = accumulate(decider[i], decider[i]+bankersPreferences.size()-1, sum);
          
               if(sum > maxsum1){
               	maxsum1 = sum;
			   }
                    
     }
     //cout<<maxsum1<<endl;
     
     
     
    int maxsum2 = 0;
    for(int i=0;i<bankersPreferences.size();i++) 
     {  
         int sum = 0;  
          for(int j=0;j<participantsPreferences.size();j++)
          {
               sum = sum + decider[j][i];
          }
               if(sum > maxsum2)
                    maxsum2 = sum;
     }
      
     
    cout<<std::max(maxsum1,maxsum2); 

    return 0;
}
