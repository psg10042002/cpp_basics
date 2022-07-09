//prefix sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
	int arr[n],pre[n]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	pre[0]=arr[0];
	for(int i=1;i<=n;i++){
		pre[i]=pre[i-1]+arr[i];
	}
	cin>>t;
	int l,r;
	while(t--){
		cin>>l>>r;
		if(l==1){
			cout<<pre[r-1]<<endl;
		}
		else{
		cout<<pre[r-1]-pre[l-2]<<endl;
	}
	}

}