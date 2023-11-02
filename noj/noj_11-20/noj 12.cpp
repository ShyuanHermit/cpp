#include <iostream>
using namespace std;
int main(){ 
	int n,t,r=0,d;
	cin>>n;
	d=n;
		while(n!=0){
		t=n%10;
		if(t!=6&&t!=9&&t!=8&&t!=1&&t!=0){
			cout<<"No";
			return 0;
		}
		if(t==6){
			t=9;
		}
		else if(t==9){
			t=6;
		}
		r=r*10+t;
		n=n/10;
		//cout<<t;
	}
	if(r==d){
		cout<<"Yes";
	}
	else cout<<"No";
	return 0;
}
