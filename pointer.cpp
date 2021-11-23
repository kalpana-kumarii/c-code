#include<iostream>
using namespace std;
int main(){
    int num,*ptr;
    ptr=&num;
   
    num=10;
    cout<<"ptr value - "<<ptr<<" \n&ptr value - "<<&ptr<<"\n*ptr value -"<<*ptr<<endl;
    cout<<"address of number  &num-"<<&num<<"\n num "<<num;
    return 0;
}