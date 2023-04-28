#include <bits/stdc++.h>
using namespace std;
vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    // Your code here
    vector<long long> res(n, -1);
    stack<long long> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
            st.pop();
        if (!st.empty())
            res[i] = arr[st.top()];
        st.push(arr[i]);
    }
    return res;
}
int main()
{
}