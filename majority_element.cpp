#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n){
    for(int i = 0; i <n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count > n/2){
            return arr[i];
        }
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n;i++){
        cin>>arr[i];

    }

    cout<<majorityElement(arr, n);



}