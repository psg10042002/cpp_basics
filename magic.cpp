#include<bits/stdc++.h>
using namespace std;
int magic(int n,int x){
		while(n!=0){
		x+=(n%10);
		n/=10;
	}	
	if (x>9){
		magic(x);
	}
	else{ 
		return x;
	}
	}
int main(){
	int n,x;
	cin>>n;
	x=0;
	int y=magic(n,x);
	cout<<y;
}