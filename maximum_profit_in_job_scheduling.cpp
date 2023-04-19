#include <bits/stdc++.h>
using namespace std;

static bool comp(vector<int> &a, vector<int> &b)
{
    if (a[1] == b[1])
        return a[0] < b[0];
    return a[1] < b[1];
}
int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit)
{
    vector<vector<int>> st;
    int n = startTime.size();
    for (int i = 0; i < n; i++)
    {
        st.push_back({startTime[i], endTime[i], profit[i]});
    }
    sort(st.begin(), st.end(), comp);
    vector<int> dp(n, 0);
    dp[0] = st[0][2];
    for (int i = 1; i < n; i++)
    {
        dp[i] = dp[i - 1];
        int left = 0;
        int right = i - 1;
        int prev = 0;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (st[mid][1] <= st[i][0])
            {
                prev = dp[mid];
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        dp[i] = max(dp[i], st[i][2] + prev);
    }
    return dp[n - 1];
}
int main(){
    
}