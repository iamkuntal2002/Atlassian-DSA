#include <bits/stdc++.h>
using namespace std;
string addBinary(string a, string b)
{
    int lena = a.size();
    int lenb = b.size();
    int carry = 0;
    if (lena == 0)
        return b;
    if (lenb == 0)
        return a;
    string res = "";
    int i = lena - 1, j = lenb - 1;
    while (i >= 0 || j >= 0)
    {
        int sum = 0;
        sum += carry;
        if (i >= 0)
        {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            sum += b[j] - '0';
            j--;
        }
        res = to_string(sum % 2) + res;
        carry = sum > 1 ? 1 : 0;
    }
    if (carry != 0)
        res = to_string(carry) + res;
    return res;
}