#include<bits/stdc++.h>
struct node{
    int data;
    node *left,*right;
};
node *newnode(int data)
{
    node *temp = new node();
    temp->data =data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
node *insert(node *root,int data){
    if(root==NULL){
        return newnode(data);
    }
    else if(data<root->data){
        root->left = insert(root->left,data);
    }
    else if(data>root->data){
        root->right = insert(root->right,data);
    }  
}
int print(node *root){
    if(root!=NULL){
        print(root->left);
        std::cout<<root->data<<" ";
        print(root->right);
    }
    return 0;
}
int main(){
    node *root = NULL;
    int i,x,data;
    std::cout<<"Enter how many nodes you want:\n";
    std::cin>>x;
    std::cout<<"Enter nodes:\n";
    for(i=0;i<x;i++)
    {
        std::cin>>data;
        if(i==0)
        {
            root = insert(root,data);
        }
        else{
            insert(root,data);
        }
    }
    std::cout<<"\n";
    print(root);
}