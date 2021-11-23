
#include<bits/stdc++.h>
using namespace std;
void rearrangePosNeg(int arr[],int n){
    
}
void printArray(int arr[],int n){

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={-12,11,,-13,-5,6,-7,5,-3,-6}};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    rearrangePosNeg(arr,n);
    return 0;
}