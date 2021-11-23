#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n], num, ct=0, beg=0, end=n-1, mid;
    cout<<"enter the element in array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the value to search position";
    cin>>num;
    while(beg<=end)
    {
        mid= (beg+end)/2;
        if(num==arr[mid])
        {
            cout<<mid;
            ct++;
           
        }
        if(arr[mid]>num){
          end= mid-1;
            
        }
        else
        {
            beg=mid+1;
            
        }
  
    }

         if(ct==0 && beg>end)
        {
        cout<<"value does not exst";
        }
    
}