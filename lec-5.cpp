#include<bits/stdc++.h>
using namespace std;
const int x=1e7;
int d[x];
int main(){
	//arrays lecture
	int a[10],n,m;
	//a[11]=1;
	//seg fault cout<<a[11];
	cin>>n>>m;
	//cout<<x;
	//1-d array
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cout<<b<<endl;//prints adress of arr
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	//2d-array
	int c[m][n];
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			cin>>c[i][j];
		}
	}
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	d[x-1]=7;
	cout<<d[x-1];
}