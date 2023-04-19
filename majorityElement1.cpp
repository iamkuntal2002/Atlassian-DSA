#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int count =0;
	int val = 0;
	for(int i =0;i<n;i++){
		if(count == 0) val = arr[i];
		if(arr[i] == val) count++;
		else count--;
	}
	count = 0;
	for(int i =0;i<n;i++){
		if(arr[i] == val) count++;
		if(count > n/2) return val;
	}
	return -1;
}
int main(){
    
}