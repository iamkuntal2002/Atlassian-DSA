#include<bits/stdc++.h>
using namespace std;
int countPairs(int arr[], int n)
{
    unordered_map<int, int> mp;
 
    // Finding frequency of each number.
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
 
    // Calculating pairs of each value.
    int ans = 0;
    for (auto it=mp.begin(); it!=mp.end(); it++)
    {
        int count = it->second;
        ans += (count * (count - 1))/2;
    }
 
    return ans;
}
int main(){
    // AuxilGiven an array of n elements. The task is to count the total number of indices (i, j) such that arr[i] = arr[j] and i < j
}