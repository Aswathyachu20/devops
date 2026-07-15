#include<iostream>
using namespace std;
int main(){
	int a,b;
	char c;
	int res;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
	cout<<"enter operator";
	cin>>c;
		if(c=='+')
		{
			res=a+b;
		}
		else{
			res=a-b;
		}
	cout<<"result="<<res;
	return 0;
}

