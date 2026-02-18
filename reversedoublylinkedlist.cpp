#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

};
Node* reverselist(Node* &head){
  Node* curr=head;
  Node* back=NULL;
  Node* forward;
  while(curr!=NULL){
    forward=curr->next;
    curr->next=back;
    
    curr->prev=forward;
    back=curr;
    curr=forward;
  }
  return back;
}
void printlist(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    cout<<"original";
    printlist(head);
    head=reverselist(head);
    cout<<"Reversed list:";
    printlist(head);
    return 0;
   
}