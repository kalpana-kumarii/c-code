#include<iostream>
using namespace std;
int main(){
int n, i, a[n];
cout<<"enter the size of array \n";
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
}

int counter=1;
while(counter<n){
     for(i=0;i<n-counter;i++){
             if(a[i]>a[i+1]){
              int temp=a[i];
              a[i]= a[i+1];
              a[i+1]=temp;
             }
     }
   counter++;
}

cout<<"\n your sorted array by bubble sort is ----";
for(i=0;i<n;i++)
{
    cout<<"\n"<<a[i]<<endl;
}

}