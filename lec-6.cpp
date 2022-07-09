#include<bits/stdc++.h>
using namespace std;
void hello(int &n){
	for(int i=0;i<n;i+=1){
		cout<<"hello world"<<endl;
	}
}
void change(int &n){
	n+=1;
}
/*int rec(int &n,int &s){
	if (n!=0){
		s+=rec(n-1);

	}
	return s;
}*/
int main(){
	int n,sum=0,a,b;
	cin>>n;
	hello(n);//pass by val
	cout<<n<<endl;
	change(n);//pass by ref
	cout<<n<<endl;
	//rec(n,sum);
	//cout<<sum;
	cin>>a>>b;
	b,a=a,b;//wont work like python;
	swap(a,b);
	cout<<a<<endl<<b;
	// arrays are impicitilu under pass by ref
	//for passing 2d arr we need to declare n val globally by const and arr
	 

}
