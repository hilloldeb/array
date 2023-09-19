#include<bits/stdc++.h>
using namespace std;

int  maxSubArr(int arr[], int n){
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j = i; j < n;j++){
            sum = sum + arr[j];
            
        }
        maxi = max(maxi, sum);
    }
    return maxi;

}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }



    cout<<maxSubArr(arr, n);
}