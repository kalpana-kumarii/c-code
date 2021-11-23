#include <bits/stdc++.h>

using namespace std;
void decToBinary(int n){
    int i=0;
    int arr[50];
  
    while(n>0){
    
        arr[i]=n%2;
        n=n/2;
        i++;
       
    }
    for(int k=i-1;k>=0;k--){
       cout<<arr[k];
     
    }
  
   
}

int main(){
    int n;
    
    cin>>n;
    decToBinary(n);

    return 0;
}
