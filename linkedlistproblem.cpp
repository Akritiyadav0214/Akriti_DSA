#include<iostream>
#include<map>
using namespace std;
class node{
    public:
    int data;
    node* next;
    // node(int val){
    //     data=val;
    //     next=NULL;
    // }

};
bool detectloop(node* head){
 map<node*,bool> visited;
    node* temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
int main(){
    node *head=new node();
    head->data=1;
    node *second=new node();
    second->data=2;
    node *third=new node();
    third->data=3;
    head->next=second;
    second->next=third;

    third->next=second;
    if(detectloop(head)){
        cout<<"Loop is present";
    }
    else{
        cout<<"Loop is not present";
    }
    return 0;
}