#include <bits/stdc++.h>
using namespace std;
bool wifiRange(int N, string S, int X)
{
    // code here
    int countzero = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == '1')
            countzero = 0;
        else
            countzero++;
        if (countzero > 2 * X || (countzero == i + 1 && countzero > X))
            return false;
    }
    if (countzero > X)
        return false;
    return true;
}
int main()
{
    int n = 5;
    int x = 1;
    string s = "11001";
    cout << wifiRange(n, s, x) << endl;
}