#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=10,b=6,c=9,num,i=1;
	cout<<(a==b);//relational statements
	cout<<(b<c && b<a)<<"\n";
	cin>>num;
	if (num>1) int x=2;//declared in if scope only
	//cout<<x; cant be acessible
	if (num%2==0){
		cout<<num<<" "<<"is even\n";

	}
	else if(num%3==0) cout<<num<<" is div by 3";
	else cout<<num<<" is not even";
	while(i<=10){
		cout<<i<<" ";
		i++;
	}
	for(int i=1;i<=10;++i){
		if (i==2) continue;
		if (i==8) break; 
		cout<<i<<endl;
	}
	// star pattern
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<'*';
		}
		cout<<endl;
	}

}