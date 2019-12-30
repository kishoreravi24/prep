#include<bits/stdc++.h>
struct node{
    int data;
    node *left,*right;
};
node *newnode(int data){
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
node *insert(node *root,int data){
    if(root==NULL){
        return newnode(data);
    }else if(data<root->data){
        root->left = insert(root->left,data);
    }else if(data>root->data){
        root->right = insert(root->right,data);
    }
    return root;
}
int sum =0;
int print(node *root){
    if(root!=NULL){
        if(root->left==NULL&&root->right==NULL){
            return root->data;
        }
        sum = (print(root->left)+print(root->right));
    }
}
int main(){
    node *root=NULL;
    int i,data;
    for(i=0;i<5;i++)
    {
        std::cin>>data;
        if(i==0){
            root=insert(root,data);
        }else{
            insert(root,data);
        }
    }
    print(root);
    std::cout<<sum<<" ";
}
