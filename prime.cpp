#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,arr[n];
    cout<<"Enter the size ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    


    for (int i=2; i<n; i++) 
        for (int j=2; j<i; j++)
        {
            if (i % j == 0) 
                break;
            else if (i == j+1)
                cout <<","<< i << " ";

        }  
       
    return 0;
}