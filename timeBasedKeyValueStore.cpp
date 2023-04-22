#include<bits/stdc++.h>
using namespace std;
class TimeMap {
public:
    unordered_map<string, map<int, string, greater<>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key) == mp.end()) return "";
        auto it = mp[key].lower_bound(timestamp);
        if (it == mp[key].end()) return "";
        
        return it->second;
    }
};
int main(){
    // Design a time-based key-value data structure that can store multiple values for the same key at different time stamps and retrieve the key's value at a certain timestamp.
    // Implement the TimeMap class:
    // TimeMap() Initializes the object of the data structure.
    // void set(String key, String value, int timestamp) Stores the key key with the value value at the given time timestamp.
    // String get(String key, int timestamp) Returns a value such that set was called previously, with timestamp_prev <= timestamp. If there are multiple such values, it returns the value associated with the largest timestamp_prev. If there are no values, it returns "".
}