#include<bits/stdc++.h>
using namespace std;
void sieve(vector<int>&vt){//sieve to check prime
	int n=vt.size()-1;
	for(int i=2;i<(int)sqrt(n)+1;i++){
		if(vt[i]==1){
			for(int j=i*i;j<n;j+=i){
				vt[j]=0;
			}
		}
	}
}
int fact(int n){// to find factorial
	if(n==0 or n==1){
		return 1;
	}
	for(int i=n-1;i>0;i--){
		n=n*i;
	}
	return n;
}

int main(){
	int n,x,B;
	cin>>n;
	cin>>B;
	vector<int>vt;
	vector<int>vt1;
	for(int i=1;i<=n;i++){
		x=fact(i);
		vt1.push_back(x+B);
	}
	
	n=x+B+1;
	vt.push_back(0);
	vt.push_back(0);
	for(int i=2;i<n;i++){
		vt.push_back(1);
	}
	sieve(vt);
	int c=0;
	for(int i=1;i<vt1.size();i++){
		if(vt[vt1[i]]==1) c++;
	}
	cout<<c;
}