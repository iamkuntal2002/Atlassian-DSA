#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        stack<int> st5, st10;   //store no of 5 and 10 notes collected
        for(auto bill : bills){
            if(bill == 5) st5.push(5);  //if 5,then no change
            else if(bill == 10){
                if(st5.empty()) return false;   //if there is no 5
                else{
                    st5.pop();
                    st10.push(10);
                }
            }
            else{
                if(st10.empty()){
                    if(st5.size()<3) return false;  //if no 10, then we require 3 5notes
                    else{
                        st5.pop(); st5.pop(); st5.pop();
                    }
                }
                else{
                    st10.pop(); //one 19
                    if(st5.empty()) return false;
                    else st5.pop(); //one 5
                }
            }
        }
        return true;
    }
};
int main(){
    
}