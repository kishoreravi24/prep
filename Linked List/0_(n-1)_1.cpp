#include<bits/stdc++.h>
struct node{
    int data;
    node *next,*prev;
};
int print1(node *temp2,node *temp3,int x){
    std::cout<<"0->(n-1)->1->(n-2)->...\n";
    int i,count=0;
    while(temp3->next!=NULL){
        temp3 = temp3->next;
    }
    for(i=0;i<x;i++)
    {
        if(i%2==0)
        {
        std::cout<<temp2->data<<" ";
        temp2= temp2->next;
        }else{
            if(count==0)
            {
                std::cout<<temp3->data<<" ";
            }
            else{
                std::cout<<temp3->prev->data<<" ";
                temp3=temp3->prev;
            }
            count++;
        }
    }
    
}
int print(node *temp2,node *temp3){
    std::cout<<"Singly\n";
    while(temp2!=NULL){
        std::cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }
    std::cout<<"\n";
    std::cout<<"Singly to Doubly\n";
    while(temp3->next!=NULL){
        temp3 = temp3->next;
    }
   int count =0;
    while(temp3->prev!=NULL){
        if(count==0){
             std::cout<<temp3->data<<" ";
             std::cout<<temp3->prev->data<<" ";
        }else{
           std::cout<<temp3->prev->data<<" "; 
        }
            temp3 = temp3->prev;
            count++;
    }
}
int doubly_list(node *head,int x){
    node *temp2 = head;
    node *head1 = NULL;
    node *prev1;
    while(head!=NULL){
        node *temp = new node();
        temp->data = head->data;
        node *temp1 = head1;
        if(head1==NULL){
            head1= temp;
            head1->prev = NULL;
            prev1 = temp;
        }else{
            while(temp1->next!=NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
            temp1->next->prev = prev1;
            prev1 = temp;
        }
        head = head->next;
    }
    node *temp3 = head1;
    print(temp2,temp3);
    std::cout<<"\n";
    print1(temp2,temp3,x);
}
int main(){
  node *head = NULL;
  int x,data,i;
  std::cin>>x;
  for(i=0;i<x;i++)
  {
      std::cin>>data;
      node *temp = new node();
      node *temp1 = head;
      temp->data = data;
      if(head==NULL){
          head = temp;
      }else{
          while(temp1->next!=NULL){
              temp1=temp1->next;
          }
          temp1->next = temp;
      }
  }
  node *temp = head;
  doubly_list(temp,x);
}
