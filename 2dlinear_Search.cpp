#include<iostream>
using namespace std;
int main()
{

 int i, j;
 cout<<"enter the size of array";
 cin>>i>>j;
 int arr[i][j],num, count=0;

 cout<<"enter the value";
 for(int k=0;k<i;k++){
      for(int l=0;l<j;l++){
          cin>>arr[k][l];
      }
     
 }

cout<<"your entered element is here\n";
                for(int k=0;k<i;k++){
                    for(int l=0;l<j;l++){
                        cout<<arr[k][l]<<"\t";
                    }
                                cout<<"\n";
                }

       cout<<"enter the value for search position";
       cin>>num;
                for(int k=0;k<i;k++){
                for(int l=0;l<j;l++)
                {
                    if(num==arr[k][l])
                    {
                      cout<<"position is row:"<<k<<" column: "<<l<<"\n";
                      count++;
                    }
                }
                        
            }
        if(count==0)
        {
            cout<<"element not found";
        }

    return 0;

}