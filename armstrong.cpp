#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int sum=0;
    while(n!=0){
       
        sum=pow(n%10,3);
        n=n/2;

    }
    cout<<sum;
}