#include<bits/stdc++.h>
using namespace std;
// case 1 : not sorted array
void case1(vector<int> arr,int n){
    int mn = INT_MAX;
    for(int i =0;i<n;i++){
        if(arr[i]<mn){
            mn = arr[i];
        }
    }
    cout<<"minimum element is "<<mn<<endl;
}
//case 2 : sorted array
void case2(vector<int> arr,int n){
    int mn = INT_MAX;
    if(arr[0]<arr[n-1]){
        mn = arr[0];    //array is sorted in increasing order
    }else if (arr[n-1]<arr[0])
    {
        mn = arr[n-1];  //array is sorted in decending order
    }
    cout<<"minumum element is "<<mn<<endl;
} 
// case 3: rotated sorted array
void case3(vector<int> arr,int n){
    int mn = INT_MAX;
    int left = 0;
    int right = n-1;
    while(left <= right){
        int mid = (left+right)/2;
        if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]) mn = arr[mid];
        if(arr[mid]<arr[left]) left = mid+1;
        else right = mid-1;
    }
    cout<<"minimum element is "<<mn<<endl;
}

// 9 8 7 6 1 2 3 4 5
