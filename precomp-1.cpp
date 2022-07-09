#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int arr[N]={0};
long long int pre[N]={0};
int main(){
	int n,m,a,b,k,maxi=-1;
	cin>>m>>n;
	while(n--){
		cin>>a>>b>>k;
		arr[a-1]+=k;
		arr[b]-=k;
	}
	for(int i=1;i<m;i++){
		arr[i]=arr[i-1]+arr[i];
	} 
	for(int i=0;i<m;i++){
		if (arr[i]>maxi){
			maxi=arr[i];
		}
	}
	for(int i=0;i<m;i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;
	cout<<maxi;

}