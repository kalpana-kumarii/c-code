#include<bits/stdc++.h>
using namespace std;

// itterative method
// void reverseArray(int arr[],int start,int end){
//     int temp=arr[start];
//     arr[start] = arr[end];
//     arr[end]=temp;
//     start++;
//     end--;
// }
//recursive method
void recReverseArray(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int temp=arr[start];
    arr[start] =arr[end];
    arr[end]=temp;
     recReverseArray(arr,start+1,end-1);

}
void printArray(int arr[],int n){

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    cout<<endl;
    //     reverseArray(arr,0,n-1);
    //    printArray(arr,n);
       
     cout<<"recursive method"<<endl;
     recReverseArray(arr,0,n-1);
      printArray(arr,n);
     
    return 0;

}