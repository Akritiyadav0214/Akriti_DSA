#include<iostream>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode*right;
    TreeNode(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};  
class Solution {
    private:
    int height(TreeNode* node){
        if(node==NULL){
            return 0;
        }
        int left=height(node->left);
        int right=height(node->right);
        int ans=max(left,right)+1;
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
       if(root==NULL){
            return 0;
        }
       int op1=diameterOfBinaryTree(root->left);
       int op2=diameterOfBinaryTree(root->right);
       int op3=height(root->left)+height(root->right);
       int ans=max(op1,max(op2,op3));
       return ans; 
    }
};