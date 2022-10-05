#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left,*right;
};

void printcurrentnode(node* root,int level){
    if (root==NULL){
        return;
    }
    if (level==1){
        cout<<root->data<<" ";
    }
    else if (level>1){
        printcurrentnode(root->left,level-1);
        printcurrentnode(root->right,level-1);
    }
}

int height(node* temp){
    if (temp==NULL){
        return 0;
    }
    else{
        int lh=height(temp->left);
        int rh=height(temp->right);
        if (lh>rh){
            return(lh+1);
        }
        else{
            return(rh+1);
        }
    }
}
void levelorder(node *root){
    int h=height(root);
    for(int i=1;i<=h;i++){
        printcurrentnode(root,i);
    }
}
node *newnode(int val){
    node *temp=new node();
    temp->left=NULL;
    temp->right=NULL;
    temp->data=val;
    return temp;
}

void inorder(node *temp){
    if(temp==NULL){
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
void preorder(node *temp){
    if(temp==NULL){
        return;
    }
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(node *temp){
    if(temp==NULL){
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
}



int main(){
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    cout<<"level order traversal\n";;
    levelorder(root);
    cout<<"\nInorder traversal\n";
    inorder(root);
    cout<<"\nPreorder traversal\n";
    preorder(root);
    cout<<"\nPostorder traversal\n";
    postorder(root);
    return 0;
}

/*
             1
        2       3
    4       5
    
*/
