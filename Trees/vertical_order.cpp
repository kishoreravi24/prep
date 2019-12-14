#include<bits/stdc++.h>
struct node{
    int data;
    node *left,*right;
};
node *nenwode(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
node *insert(node *root,int data)
{
    if(root==NULL){
        return nenwode(data);
    }
    else if(data<root->data)
    {
        root->left = insert(root->left,data);
    }else if(data>root->data)
    {
        root->right = insert(root->right,data);
    }
    return root;
}
//vertical Order
std::unordered_map<int,int> umap;
int hd=0;
int print(node *root,int data1)
{
    if(root->data==data1)
    {
        hd=1;
    }
    if(root!=NULL)
    {
        umap[hd]=root->data;
        std::cout<<hd<<" "<<root->data<<" ";
    }
    if(root->left!=NULL)
    {
        hd-=1;
        print(root->left,data1);
    }
    if(root->right!=NULL)
    {
        hd+=1;
        print(root->right,data1);
    }
    return 0;
}
int print_map(){
    for(auto x:umap)
    {
        std::cout<<x.first<<" "<<x.second<<"\n";
    }
    return 0;
}
int main(){
    node *root = NULL;
    int x,i,data;
    std::cout<<"Enter the size of the nodes:\n";
    std::cin>>x;
    std::cout<<"Enter the nodes:\n";
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
    int data1 = root->right->data;
    print(root,data1);
    std::cout<<"\n";
    print_map();
}