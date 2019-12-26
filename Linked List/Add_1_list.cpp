#include<bits/stdc++.h>
struct node{
    int data;
    node *next;
};
node *head1 = NULL;
int insert(int data){
    node *temp = new node();
    node *temp1 = head1;
    temp->data = data;
    if(head1==NULL){
        head1 = temp;
    }
    else{
        while(temp1->next!=NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}
int print(node *head1){
    while(head1!=NULL){
        std::cout<<head1->data<<" ";
        head1 = head1->next;
    }
}
int print_as_string(node *head){
    std::string s="";
    int x,count=0,i;
    while(head!=NULL){
        x = head->data;
        head=head->next;
        s+=std::to_string(x);
        count++;
    }
    std::cout<<s<<"\n";
    int f = stoi(s);
    f++;
    std::cout<<f<<"\n";
    int arr[count],k=0;
    for(i=0;i<count;i++)
    {
        arr[k++]=f%10;
        f/=10;
    }
    for(i=k-1;i>=0;i--)
    {
        insert(arr[i]);
    }
    print(head1);
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
              temp1 = temp1->next;
          }
          temp1->next = temp;
      }
  }
  print_as_string(head);
}
