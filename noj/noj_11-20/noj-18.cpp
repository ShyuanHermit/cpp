#include <bits/stdc++.h>
using namespace std;
int gcd(int m,int n){
	return n>0? gcd(n,m%n):m;
}
int main(){ 
double a;
int b,i=0;
cin>>a;
b=a;
while(a-b>0){
	a=a*10;b=a;i++;
}
int t=pow(10,i);
int c=gcd(a,t);
cout<<a/c<<"/"<<t/c<<endl;
	return 0;
}
