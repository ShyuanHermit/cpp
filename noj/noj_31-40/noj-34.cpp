/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-34.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Tue Nov 14 10:32:52 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int harshadnumber(int n,int ans);

int main(){

	int n,ans=0;

	cin>>n;
	
	cout<<harshadnumber(n,ans);
	
	return 0;
}

int harshadnumber(int n, int ans){
	
	int t=n,s=0;

	while (t){
	
	s=s+t%10;

	t=t/10;

	}
return n==1? ans==0? ans+=1 : ans: s!=0&&n%s==0 ? harshadnumber(n/s,++ans): ans ;
}
//好吧，这样“优美的语法”还让我有些上瘾，好吧，果然，烂代码是会传染的哈哈哈。
