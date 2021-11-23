#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
  
void print(node* n){
  
    while(n!=NULL){
        cout<<n->data<<"->";
        n=n->next;
    }
    cout<<"NULL";
}
int main(){
    node* head=NULL;
    node* first=NULL;
    node* second=NULL;
    node* third=NULL;
    head=new node();
    first=new node();
    second=new node();
    third=new node();

head->data=1;
head->next=first;
first->data=2;
first->next=second;
second->data=3;
second->next=third;
third->data=4;
third->next=NULL;

print(head);
return 0;
}