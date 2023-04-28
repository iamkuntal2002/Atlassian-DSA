#include<bits/stdc++.h>
using namespace std;
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int low =0;
	    int mid =0;
	    while(mid <n){
	        if(arr[low] == 0 && arr[mid] == 0) mid++;
	        else if(arr[low] == 0 && arr[mid] != 0) swap(arr[low],arr[mid]);
	        else {
	            low++; mid++;
	        }
	    }
	}
};
int main(){
    
}