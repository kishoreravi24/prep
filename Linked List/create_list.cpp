#include<bits/stdc++.h>
class Node{
    public:
        int data;
        Node* next;
};
int main(){
    Node* head = NULL;
    int data,size;
    std::cin>>size;
    while(size-->0){
        Node* temp = new Node*;
        std::cin>>data;
        temp->data = data;

        Node* temp1 = new Node*;
        temp1 = head;

        if(head == NULL){
            head = temp;
        } else {
            while(temp1->next!=NULL){
                temp1 = temp1->next;
            }
            temp1->next = temp;
        }
    }

    //Print head
    while(head!=NULL){
        std::cout<<head->data<<" ";
        head = head->next;
    }
}