#include <bits/stdc++.h>
using namespace std;
int main(){ 
int a,i,j=0,t,b;
cin>>a;
b=a;
while(a>0){
	for(i=0;i<a;i++){
		cout<<i<<" ";
	}
	cout<<endl;	
	t=++j;
		while(t<b&&t>0){
		cout<<t<<" ";
		t--;
		}
	a--;
}
	return 0;
}
