#include<bits/stdc++.h>
using namespace std;
vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function 
    set<int>s;      //stack in not applicable for this question
    vector<int> v;
    for(int i = 0;i<n;i++){
        s.insert(arr[i]);
        auto it = s.find(arr[i]);
        if(it == s.begin()) v.push_back(-1);
        else {
            it--;
            v.push_back(*it);
        }
    }
    return v;
}
