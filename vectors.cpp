//vectors and its methods
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<bool>ve1;
	vector<int>ve(10,10);
	int arr[100]={0};
	auto it= ve.begin();//rbegin,rend
	ve.erase(it+1);
	cout<<ve.begin();
	cout<<ve.end();
	cout<<ve.rbegin();
	cout<<ve.rend();
}