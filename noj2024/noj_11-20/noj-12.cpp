/*************************************************************************
    > File Name: /home/lvshy/cpp/noj2024/noj_11-20/noj-12.cpp
    > Author: lvshy
    > Mail: shyuan231016@outlook.com 
    > Created Time: Tue Mar 26 14:48:31 2024
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){

	long long int a,b,m,ans;
	cin>>a>>b>>m;

	a=a%m;
	b=b%m;
	
	ans=(a*b)%m;

	cout<<ans<<endl;
return 0;

}
