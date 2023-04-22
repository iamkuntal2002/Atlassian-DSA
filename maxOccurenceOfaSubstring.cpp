#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
      int n=s.size();
        // To store  frequency of characters in string s
        unordered_map<char,int>freqMap;
        // To store  Substring of string s with given constraint of size minSize
        unordered_map<string,int>ansFreqMap;
        //tells us about unique characters in string s
        int countOfUniqueChar=0;
        int ans=0;
        // i -> for acquiring
        int i=0;
         //j->for relasing
        int j=-1;
        // acquire till less than minsize-1
      for(;i<minSize-1;i++){
          char ch=s[i];
          freqMap[ch]++;
      }
      i--;
      //now make the minSize window by acquring and relasing
      while(i<n-1){
        i++;
        char ch=s[i];
        freqMap[ch]++;
        countOfUniqueChar=freqMap.size();
        if(countOfUniqueChar<=maxLetters){
          string sub= s.substr(j+1,i-j);
          ansFreqMap[sub]++;
        }
        j++;
          ch=s[j];
          freqMap[ch]--;
        if(freqMap[ch]==0)freqMap.erase(ch);          
      }      
      for(auto key:ansFreqMap){
        int freqVal=key.second;
        ans=max(ans,freqVal);
        //cout<<key.first<<" "<<key.second<<endl;
      }
      //cout<<ansFreqMap.size()<<endl;
      return ans;  
    }
};
int main(){
    
}