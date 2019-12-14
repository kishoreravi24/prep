#include<bits/stdc++.h>
struct node{
    int data;
    node *next;
};
int print(node *head){
    while(head!=NULL){
        std::cout<<head->data<<" ";
        head = head->next;
    }
    return 0;
}
int merge(node *head,node *second){
    node *temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = second;
    print(head);
    return 0;
}
int insert(node *head,node *second){
    std::cout<<"First Linked List:\n";
    int x,data;
    std::cin>>x;
    while(x-->0){
        std::cin>>data;
        node *temp = new node();
        temp->data = data;
        node *temp1 = head;
        if(head==NULL)
        {
            head=temp;
        }else{
            while(temp1->next!=NULL)
            {
                temp1=temp1->next;
            }
            temp1->next = temp;
        }
    }
    std::cout<<"\nSecond Linked List:\n";
    int x1,data1;
    std::cin>>x1;
    while(x1-->0){
        std::cin>>data1;
        node *temp = new node();
        temp->data = data1;
        node *temp1 = second;
        if(second==NULL){
            second=temp;
        }
        else{
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next = temp;
        }
    }
    merge(head,second);
    return 0;
}
int main(){
    node *head=NULL;
    node *second = NULL;
    insert(head,second);
}