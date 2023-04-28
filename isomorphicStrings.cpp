#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        set<char> st;
        for(int i =0; i<s.size(); i++){
            if(mp.count(s[i]) == 0 && st.count(t[i]) == 0){
                mp[s[i]] = t[i];
                st.insert(t[i]);
            }
            // else if(mp.count(s[i]) == 0 && st.count(t[i]) ==0) return false;
            else if(mp[s[i]] != t[i]) return false;
        }
        return true;
    }
};
