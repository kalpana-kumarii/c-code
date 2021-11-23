#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
//didplay linked list
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";

}
//cheking odd or even
int LinkedListLength(Node* head){
    while(head && head->next){
        head=head->next->next;
    }
    if(!head){
        return 0;
    }
    return 1;
}
void push(Node** head,int info){
    // Allocating node
    Node* node=new Node();
     // Info into node
       
    node->data=info;
    // Next of new node to head
  node->next=(*head);
    // head points to new node
    (*head)=node;

}
int main(){
    Node* head=NULL;
  
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    display(head);
    int check=LinkedListLength(head);
     if(check == 0)
    {
        cout << "\nEven\n";
    }
    else
    {
        cout << "\nOdd\n";
    }
    return 0;
}