#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int value){
    data=value;
    next=NULL;
}

};
void insertAtTAil(node* &head,int value){
    node* n=new node(value);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
 node* head=NULL;
 insertAtTAil(head,1);
 insertAtTAil(head,2);
 insertAtTAil(head,3);
 insertAtTAil(head,4);
 display(head);
    return 0;
}