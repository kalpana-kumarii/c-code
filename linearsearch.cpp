#include <iostream>
using namespace std;

int main() {
 int n;
  cout<<"enter the size of array\n";
   cin>>n;
  int arr[n],i, num, count=0;
  cout<<"enter the element of array\n";
 for(i=0;i<n;i++)
   {
   cin>>arr[i];
   }
     cout<<"your entered element is\n";
         for(i=0;i<n;i++)
         {
         cout<<arr[i]<<"\t";
         }
    cout<<"\nenter the value to find\n";
    cin>>num;
    for(i=0;i<n;i++)
    {
       if(num==arr[i])
       {
          count++;
            cout<<"position is"<<i<<"\n";
            
        }
      
    }
 if(count==0)
 {
   cout<<"value not found";
 }
  return 0;
  exit;
}
