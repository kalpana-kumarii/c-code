#include <iostream>
using namespace std;
int convertFive(int n);

int main() {
	//code
	int n;
	cin>>n;
	cout<<"your op is"<<convertFive(n);


	return 0;
}
int convertFive(int n) {
    // Your code here
    int sum=0;
   while(n!=0){
       
        
        // if(c==0){
        //    sum=sum*10+c+5; 
        // }
        // else{
         sum=sum*10+n%10;
        // }
        
       
         n= n/10;
    }
   
   
   return  sum;
}