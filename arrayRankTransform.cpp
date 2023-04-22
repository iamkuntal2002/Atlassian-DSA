#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> copy(arr);
        sort(copy.begin(), copy.end());
        unordered_map<int, int> rank;
        for (int& a : copy)
            rank.emplace(a, rank.size() + 1);
            // rank[a] = rank.size()+1;
        for (int i = 0; i < copy.size(); ++i)
            copy[i] = rank[arr[i]];
        return copy;
    }
};
int main()
{
    vector<int> v = {40,10,20,30};
}