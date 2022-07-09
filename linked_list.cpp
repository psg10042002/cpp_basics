//linked list creation
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};
void display(Node *head){
	Node *temp=head;
	while(temp!=NULL){  // while temp is not null
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
Node *head=NULL;
void append(int val){
	Node *newnode=new Node();
	newnode->data=val;
	if(head==NULL){
		head=newnode;
		return;
	}
	Node *curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next=newnode;

}
int main(){
	/*Node *head= new Node();//creating new node
	Node *first=new Node();
	Node *second=new Node();
	head->data=10;// assigning data
	head->next=first;//making connection
	first->data=20;
	first->next=second;
	second->data=30;
	display(head);*/
	append(40);
	append(50);
	append(60);
	display(head);
}