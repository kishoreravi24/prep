#include<bits/stdc++.h>
struct node{
    std::string data;
    node *left;
};
node *newnode(std::string data){
    node *temp = new node();
    temp->data=data;
    temp->left = NULL;
}
void print(node *root){
    if(root!=NULL){
        std::cout<<root->data<<"\n";
        print(root->left);
    }
}
int main(){
    node *root;
    root = newnode("kishore");
    root->left = newnode("C");
    root->left->left = newnode("Cpp");
    print(root);
}