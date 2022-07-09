#include<bits/stdc++.h>
using namespace std;
void star(int r,int c){
	if(r==0){
		return;
	}
	if(c<r){
		star(r,c+1);
		cout<<'*';
	}
	else{
		star(r-1,0);
		cout<<'\n';
	}
}
int main()
{
	int r,c;
	cin>>r;
	star(r,c);
}