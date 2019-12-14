#include<bits/stdc++.h>
struct node{
	int data;
	node *next;
};
int make_loop(node *head,int loop)
{
	int counter=1;
	node *next_gen=head;
	while(counter<loop)
	{
		next_gen=next_gen->next;
		counter++;
	}
	while(head->next!=NULL)
	{
		head=head->next;
	}
	head->next=next_gen;
	return 0;
}
int detect_loop(node *head){
	node *fast=head;
	node *slow=head;
	while(fast!=NULL&&fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)
		{
			return 0;
		}
	}
	return 1;
}
int del_loop(node *head)
{
	node *fast = head;
	node *slow = head;
	while(fast!=NULL&&fast->next!=NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if(fast==slow)
		{
			std::cout<<fast->data;
			break;
		}
	}

	std::cout<<"\n"<<fast->data<<"\n";
	node *slow1 = head;
	while(slow1!=NULL)
	{
		if(fast->next==slow1->next)
		{
			std::cout<<slow1->data<<" "<<fast->data<<"\n";
			fast->next=NULL;
			return 0;
			
		}
		slow1=slow1->next;
		fast=fast->next;
	}
}
int print(node *head)
{
	while(head!=NULL)
	{
		std::cout<<head->data<<" ";
		head=head->next;
	}
}
int main(){
	node *head = NULL;
	int x,data;
	std::cin>>x;
	while(x-->0){
		std::cin>>data;
		node *temp = new node();
		temp->data = data;
		node *temp1;
		temp1=head;
		if(head==NULL){
			head = temp;
		}else{
			while(temp1->next!=NULL){
				temp1=temp1->next;
			}
			temp1->next=temp;
		}
	}
	int loop=4;
	node *print1=head;
	print(print1);
	node *temp = head;
	make_loop(temp,loop);
	node *temp1 = head;
	if(detect_loop(temp1)==0)
	{
		std::cout<<"\nLoop Detected\n";
		node *loop = temp;
		del_loop(loop);
	}
	std::cout<<"\n";
	print(head);
}