#include<bits/stdc++.h>
struct node{
    int data;
    node *next;
};
int sort(node *head)
{ 
    node *temp1=head;
    int counter=0;
    while(temp1!=NULL)
    {
        temp1=temp1->next;
        counter++;
    }
    int i,j,temp;
    for(i=0;i<counter;i++)
    {
        for(j=0;j<counter-i;j++)
        {
            if(head->data>head->next->data){
                temp=head->data;
                head->data = head->next->data;
                head->next->data = temp;
            }
        }
    }
    return 0;
}
int print(node *temp)
{
    while(temp!=NULL)
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
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
        node *temp1 = head;
        temp->data = data;
        if(head==NULL)
        {
            head = temp;
        }else{
            while(temp1->next!=NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp;
        }
    }
    node *temp = head,*temp1=head;
    print(temp);
    std::cout<<"\n";
    sort(temp1);
    std::cout<<"\n";
    print(head);
}