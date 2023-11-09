/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_21-30/noj-25/noj-25试做.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Mon Nov  6 11:03:45 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;

	cin>>b>>c;

	a=sqrt(b*b+c*c);

	if(a*a==b*b+c*c){cout<<a;}
	else cout<<"error"<<'\n'<<"a="<<a<<'\t'<<"a^2="<<b*b+c*c;

	return 0;
}
