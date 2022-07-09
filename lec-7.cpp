//pointers lec
//1byte=8bits
#include<bits/stdc++.h>
using namespace std;
void incr(int &n){//reference
	n++;
}
void incr1(int *n){//pointers
	(*n)++;
}
int main(){
	int a,b[10];
	int *x,**y;//y is double pointer
	cin>>a;
	x=&a;
	y=&x;
	b[0]=a;
	b[1]=a+1;
	cout<<x<<endl;
	cout<<*x<<endl;
	cout<<b<<endl;
	cout<<*(b+1)<<endl;
	cout<<y<<endl;
	cout<<*y<<endl;
	cout<<**y<<endl;
	incr(a);
	cout<<a<<endl;
	incr1(&a);
	cout<<a<<endl;
	cout<<sizeof(x)<<" ";
	cout<<sizeof(y);
}