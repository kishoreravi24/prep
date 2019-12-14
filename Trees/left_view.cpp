#include<bits/stdc++.h>
struct node{
    int data;
    node *left,*right;
};
node *newnode(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
node *insert(node *root,int data)
{
    if(root==NULL)
    {
        return newnode(data);
    }
    else if(data<root->data)
    {
        root->left = insert(root->left,data);
    }else if(data>root->data){
        root->right = insert(root->right,data);
    }
    return root;
}
//Left View
int left_view(node *root,int level,int *max_level){
    if(root==NULL)
    {
        return 0;
    }
    if(*max_level<level){
        std::cout<<root->data<<" ";
        *max_level=level;
    }
    left_view(root->left,level+1,max_level);
    left_view(root->right,level+1,max_level);
    return 0;
}
int print(node *root)
{
    int max_level =0;
    left_view(root,1,&max_level);
    return 0;
}
int main(){
    node *root = NULL;
    int i,data;
    for(i=0;i<7;i++)
    {
        std::cin>>data;
        if(i==0)
        {
            root = insert(root,data);
        }else {
            insert(root,data);
        }
    }
    print(root);
}