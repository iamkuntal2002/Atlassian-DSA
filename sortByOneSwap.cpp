#include<bits/stdc++.h>
using namespace std;
void sortByOneSwap(int arr[], int n)
{
    for (int i = n-1; i > 0; i--)
    {
        if (arr[i] < arr[i-1])
        {
            int j = i-1;
            while (j>=0 && arr[i] < arr[j])
                j--;
 
            swap(arr[i], arr[j+1]);
            break;
        }
    }
}
int main(){

}