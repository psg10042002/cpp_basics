//vectors and pairs
#include<bits/stdc++.h>
using namespace std;
int main(){
	pair<int,string>p;
	p=make_pair(1,"abc");
	cout<<p.first<<" ";
	cout<<p.second<<endl;
	vector<int>vt;
	vector<pair<int,int>>pv;
	vt.push_back(3);
	cout<<vt[0]<<endl;
	vt.pop_back();
	cout<<vt[0]<<endl;
	pv.push_back({2,3});
	cout<<pv[0].first<<"  "<<pv[0].second<<endl;
	cout<<vt.size();
}