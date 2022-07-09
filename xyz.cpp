
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	vector<int>vt;
	vector<int>vt1;
	for(int i=1;i<=s.size()+1;i++){
		vt.push_back(i);
	}
	for(int i=0;i<=s.size();i++){
		if(s[i]=="I"){
			vt1.push_back(vt[0]);
			vt.erase(vt.begin());
		}
		else{
			vt1.push_back(vt[vt.pop_back()]);
			//vt.pop_back();
		}
	}
	vt1.push_back(vt1[0]);

}