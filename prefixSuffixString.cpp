#include <bits/stdc++.h>
using namespace std;
int prefixSuffixString(vector<string> &S1, vector<string> S2)
{
    // Code here
    int count = 0;
    for (auto &s1 : S1)
    {
        for (auto &s2 : S2)
        {
            if (s1.find(s2) < s1.size())
            {
                count++;
                break;
            }
        }
    }
    return count;
}       //not the correct approach

//trie solution
class trie{
  public:
  vector<trie*> alphabets{26,nullptr};
};
class Solution{
public:
     trie* root=new trie();
     trie* t=nullptr;
     void insert(string& s){
         t=root;
         for(int i=0;i<s.size();++i){
             if(t->alphabets[s[i]-'a']==nullptr) 
                t->alphabets[s[i]-'a']=new trie();
             t=t->alphabets[s[i]-'a']; 
         }
     }
     bool search(string& s){
        t=root;
        for(int i=0;i<s.size();++i){
             if(t->alphabets[s[i]-'a']==nullptr) 
               return false;
             t=t->alphabets[s[i]-'a']; 
         }
         return true;
     }
     
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        string t;
        for(int i=0;i<s1.size();++i){
            t.clear();
            for(int j=0;j<s1[i].size();++j){
                t.push_back(s1[i][j]);
                insert(t);
            }
            reverse(s1[i].begin(),s1[i].end());
            t.clear();
            for(int j=0;j<s1[i].size();++j){
                t.push_back(s1[i][j]);
                insert(t);
            }
        }
        int res=0;
        for(int i=0;i<s2.size();++i){
            if(search(s2[i])) res++;
            else {
                reverse(s2[i].begin(),s2[i].end());
                if(search(s2[i])) res++;
            }
        }
        return res;
    }
};          //correct approach
int main()
{
    vector<string> s1 = {"cat", "catanddog", "lion"};
    vector<string> s2 = {"cat", "dog", "rat"};
    cout << prefixSuffixString(s1, s2) << endl;
}