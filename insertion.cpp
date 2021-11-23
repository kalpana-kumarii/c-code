#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the siz eof array";
    cin>>n;
    cout<<"enter the element in array";
    int i, num, pos, arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    if((arr[i])!=0){
      
                cout<<"enter the element that you want to insert ";
                cin>>num;
                cout<<"enter the position";
                cin>>pos;
                for(i=0;i<pos;i++)
                {
                        if(i==pos){
                        arr[i]= arr[i+1];
                        arr[i]=arr[num];
                        cout<<"data : "<<num<<" inserted successfully";
                        }
                }
                for(i=0;i<n;i++){
                    cout<<"your updated array is \n"<<arr[i]<<"\t";
                        }
    }
     else
     {
         cout<<"not space available to insert";
    }

}