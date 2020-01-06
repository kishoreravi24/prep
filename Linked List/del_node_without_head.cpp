#include<bits/stdc++.h>
struct node{
    int data;
    node *next;
};
int del(node *temp){
    // *temp = values from 2nd to NULL;
    *temp = *(temp->next);
    //*temp->next from 3rd to NULL;
}
int print(node *head){
    while(head!=NULL){
        std::cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
  node *head = NULL;
  int x,data;
  std::cin>>x;
  while(x-->0){
      std::cin>>data;
      node *temp = new node();
      temp->data= data;
      node *temp1 = head;
      if(head==NULL){
          head=temp;
      }else{
          while(temp1->next!=NULL){
                temp1 = temp1->next;
          }
        temp1->next = temp;      
      }
  }
  //Delete_node_without_head;
  //Lets Take second value;
    node *temp = head;
    int x1=2;
    while(x1-->1){
        temp=temp->next;
    }
    del(temp);
    print(head);
}
