#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i =0;i<tokens.size();i++){
            string s = tokens[i];
            if(s != "+" && s != "-" && s != "/" && s != "*"){
                st.push(stoi(s));
            }
            else{
                int val1 = st.top(); st.pop();
                int val2 = st.top(); st.pop();
                if(s == "+"){
                    int val = (val2+val1);
                    st.push(val);
                }
                else if(s == "-"){
                    int val = val2-val1;
                    st.push(val);
                }
                else if(s == "*"){
                    int val = val2*val1;
                    st.push(val);
                }
                else if(s == "/"){
                    int val = val2/val1;
                    st.push(val);
                }
            }
        }
        return st.top();
    }
};
int main(){
    
}