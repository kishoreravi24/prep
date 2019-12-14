#include<bits/stdc++.h>
struct node{
    char data;
    node *next;
};
int pal(node *head){
    std::stack<char> stack;
    node *temp = head;
    while(temp!=NULL)
    {
        stack.push(temp->data);
        temp=temp->next;
    }
    char data1;
    int in_count=0,out_count=0;
    while(head!=NULL){
        data1 = stack.top();
        stack.pop();
        if(data1==head->data){
            in_count++;
        }
        out_count++;
        head=head->next;
    }
    if(in_count==out_count){
        return 1;
    }
    return 0;
}
int main(){
    node *head = NULL;
    int x;
    char data;
    std::cin>>x;
    while(x-->0){
        std::cin>>data;
        node *temp = new node();
        temp->data = data;
        node *temp1 = head;
        if(head==NULL){
            head = temp;
        }else{
            while(temp1->next!=NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
        }
    }
    if(pal(head)){
        std::cout<<"True";
    }else{
        std::cout<<"False";
    }
    return 0;
}