#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
   int start =0, mid = 0, end = n-1;
   while(mid <= end){
      if(arr[mid] == 0){
         swap(arr[start],arr[mid]);
         start++; mid++;
      }
      else if(arr[mid] == 1) mid++;
      else if(arr[mid] == 2){
         swap(arr[mid],arr[end]);
         //mid++; 
         end--;
      } 
   }
}