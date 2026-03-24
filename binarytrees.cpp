#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node* root){
  cout<<"enter the data:"<<endl;
  int data;
  cin>>data;
  root=new node(data);
  if(data==-1){
    return NULL;
  }
  cout<<"enter the data for left of "<<data<<endl;
  root->left=buildtree(root->left);
    cout<<"enter the data for right of "<<data<<endl;

    root->right=buildtree(root->right);
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ",
    inorder(root->right);
}

int main(){
    node* root=NULL;
    root=buildtree(root);
    cout<<"inorder traversal"<<endl;
    inorder(root);
    return 0;
}
