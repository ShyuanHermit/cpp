#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	return abs(b)>0? gcd(abs(b),abs(a)%abs(b)):abs(a);
}
int main(){ 
int a,b,c,d;
char m;
int n1,n2,n3,n4;
cin>>a>>m>>b;
cin>>c>>m>>d;
int dw=b*d;
//plus:
int pu=a*d+b*c;
if(pu==0){
	dw=1;
}else if(dw<0){
	dw=-dw;pu=-pu;}
	n1=gcd (abs(dw),abs(pu));

//minus:
int mu=a*d-b*c;
if(mu==0){
	dw=1;
}else if(dw<0){
	dw=-dw;mu=-mu;}
	n2=gcd (abs(dw),abs(mu));
//multi:
int uu=a*c;
if(uu==0){
	dw=1;
}else if(dw<0){
	dw=-dw;uu=-uu;}
	n3=gcd (abs(dw),abs(uu));
//dev:
int eu=a*d;int ed=b*c;
if(eu==0){
	ed=1;
}else if(ed<0){
	ed=-ed;eu=-eu;}
	n4=gcd (abs(ed),abs(eu));
cout<<"("<<a<<"/"<<b<<")"<<"+"<<"("<<c<<"/"<<d<<")"<<"="<<pu/n1<<"/"<<dw/n1<<endl;
cout<<"("<<a<<"/"<<b<<")"<<"-"<<"("<<c<<"/"<<d<<")"<<"="<<mu/n2<<"/"<<dw/n2<<endl;
cout<<"("<<a<<"/"<<b<<")"<<"*"<<"("<<c<<"/"<<d<<")"<<"="<<uu/n3<<"/"<<dw/n3<<endl;
cout<<"("<<a<<"/"<<b<<")"<<"/"<<"("<<c<<"/"<<d<<")"<<"="<<eu/n4<<"/"<<ed/n4<<endl;
	return 0;
}
