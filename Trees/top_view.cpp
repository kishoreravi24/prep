#include<bits/stdc++.h>
struct node{
	int data;
	node *left,*right;
};
node *newnode(int data)
{
	node *temp = new node();
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
node *insert(node *root,int data)
{
	if(root==NULL){
		return newnode(data);
	}else if(data<root->data){
		root->left = insert(root->left,data);
	}else if(data>root->data){
		root->right = insert(root->right,data);
	}
	return root;
}
//Vertical Order
std::map<int,int> map;
int y;
int print(node *root,int hd){
	if(root!=NULL)
	{
		map.insert(std::pair<int,int>(hd,root->data));
		std::cout<<hd<<" "<<root->data<<"\n";
	}
	if(root->left!=NULL)
	{
		y=hd-1;
		print(root->left,y);
	}
	if(root->right!=NULL){
		y=hd+1;
		print(root->right,y);
	}
}
int print_map(){
	std::map<int,int>::iterator itr;
	int z;
	for(itr=map.begin();itr!=map.end();itr++){
		z=itr->first;
		for(itr=map.begin();itr!=map.end();itr++)
		{
			if(itr->first==z){
				std::cout<<itr->first<<" "<<itr->second<<"\n";
				break;
			}
		}
	}
}
int main(){ 
	node *root = NULL;
	int i,data;
	for(i=0;i<7;i++)
	{
		std::cin>>data;
		if(i==0){
			root = insert(root,data);
		}else{
			insert(root,data);
		}
	}
	print(root,0);
	std::cout<<"\n";
	print_map();
}