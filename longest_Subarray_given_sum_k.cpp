#include<bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n, int k){
    
    int len = 0;
    int j;
    for(int i = 0; i < n;i++){
        int sum = 0;
        for( j = i; j  < n;j++){
            sum = sum + arr[j];
            if(sum == k){
            len = max(len, j-i+1);
        }
    }
        
    }
    return len;
}


int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n ;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    cout<<longestSubarray(arr, n, k);
}