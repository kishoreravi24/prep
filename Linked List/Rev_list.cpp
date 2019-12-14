#include<bits/stdc++.h>
struct node{
    int data;
     node *next;
};
int print(node *head)
{
    while(head!=NULL){
        std::cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}
int rev(node *head)
{
    node *curr = head;
    node *prev = NULL,*next;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr= next;
    }
    std::cout<<"\n";
    print(prev);
    return 0;
}
int main(){
    node *head = NULL;
    int x,data;
    std::cin>>x;
    while(x-->0)
    {
        std::cin>>data;
        node *temp = new node();
        temp->data = data;
        node *temp1;
        temp1=head;
        if(head==NULL)
        {
            head = temp;
        }
        else{
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next = temp;
        }
    }
    node *temp=head;
    print(temp);
    std::cout<<"\n";
    rev(head);
    return 0;
}