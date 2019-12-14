#include<bits/stdc++.h>
struct node{
    int data;
    node *next;
};
int print(node *temp){
    while(temp!=NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
int rotate(node *head){
    node *temp = head;
    int k=4,count=0;
    while(temp!=NULL&&count<k-1){
        temp=temp->next;
        count++;
    }
    node *ktemp = temp;
    while(temp->next!=NULL){
        temp=temp->next;
    
    }
    temp->next = head;
    head = ktemp->next;
    ktemp->next=NULL;
    std::cout<<"\n";
    print(head);
    return 0;
}
int main(){
    node *head = NULL;
    int x,data;
    std::cin>>x;
    while(x-->0){
        std::cin>>data;
        node *temp = new node();
        temp->data=data;
        node *temp1 = head;
        if(head==NULL){
            head = temp;
        }else{
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next = temp;
        }
    }
    node *temp=head,*temp1=head;
    print(temp);
    std::cout<<"\n";
    rotate(temp1);
}