#include<bits/stdc++.h>
using namespace std;
int sortedArray(int arr[], int n){
    bool isSorted = true;
    int i = arr[0];
    while(i<n){
        if(arr[i] < arr[i+1]){
            i++;
        }else{
            isSorted = false;
            break;
        }
    }
    if(isSorted == false){
        return 0;
    }else{
        return 1;
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i <n;i++){
        cin>>arr[i];
    }

    cout<<sortedArray(arr, n);
    

}