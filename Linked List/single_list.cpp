#include<bits/stdc++.h>
struct node{
    int data;
    node *next;
};
int del_node(node *head,int x){
    while(head!=NULL){
        if(head->next->data==x){
            node *temp=head->next;
            head->next = temp->next;
            free(temp);
            break;
        }
        head=head->next;
    }
    return 0;
}
int print(node *head){
    while(head!=NULL){
        std::cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}
int main(){
    node *head = NULL;
    int x,data;
    std::cout<<"Enter number of nodes:\n";
    std::cin>>x;
    std::cout<<"\n";
    while(x-->0){
        node *temp = new node();
        node *temp1;
        std::cin>>data;
        temp->data = data;
        temp1=head;
        if(head==NULL){
            head=temp;
        }else{
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next = temp;
        }
    }
    std::cout<<"\n";
    print(head);
    int del;
    std::cout<<"After Deletion:\n";
    std::cin>>del;
    node *temp = head;
    del_node(temp,del);
    std::cout<<"\n";
    print(head);
    return 0;
}