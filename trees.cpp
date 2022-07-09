// trees
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
struct Node{
	Node *left,*right;
	int data;
	Node(int x){
		data=x;
		left=NULL;
		right=NULL;
	}
};
void inorder(Node *root){
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(Node *root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);

}
void postorder(Node *root){
	if(root==NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int main(){
	Node *root= new Node(1);
	root->left= new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	//cout<<root->right->data;
	inorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl<<log10(25);
		
}