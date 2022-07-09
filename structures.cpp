//structures
#include<bits/stdc++.h>
using namespace std;
 struct Dob{
 	int day;
 	string month;
 	int year;
 };
int main(){
	Dob student1;
	student1.day=10;
	student1.month="April";
	student1.year=2002;
	cout<<student1.month;
}