#include <bits/stdc++.h>
using namespace std;
  
// function for maximum subset diff
int maxDiff(vector<int>& arr, int n)
{
    unordered_map<int, int> hashPositive;
    unordered_map<int, int> hashNegative;
  
    int SubsetSum_1 = 0, SubsetSum_2 = 0;
  
    // construct hash for positive elements
    for (int i = 0; i <= n - 1; i++)
        if (arr[i] > 0)
            hashPositive[arr[i]]++;
  
    // calculate subset sum for positive elements
    for (int i = 0; i <= n - 1; i++)
        if (arr[i] > 0 && hashPositive[arr[i]] == 1)
            SubsetSum_1 += arr[i];
  
    // construct hash for negative elements
    for (int i = 0; i <= n - 1; i++)
        if (arr[i] < 0)
            hashNegative[abs(arr[i])]++;
  
    // calculate subset sum for negative elements
    for (int i = 0; i <= n - 1; i++)
        if (arr[i] < 0 && 
            hashNegative[abs(arr[i])] == 1)
            SubsetSum_2 += arr[i];
  
    return abs(SubsetSum_1 - SubsetSum_2);
}
  
// driver program
int main()
{
    vector<int> arr = { 4, 2, -3, 3, -2, -2, 8 };
    cout << "Maximum Difference = " << maxDiff(arr, arr.size());
    return 0;
}