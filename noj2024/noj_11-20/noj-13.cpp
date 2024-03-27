/*************************************************************************
    > File Name: /home/lvshy/cpp/noj2024/noj_11-20/noj-13.cpp
    > Author: lvshy
    > Mail: shyuan231016@outlook.com 
    > Created Time: Tue Mar 26 14:54:17 2024
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){

	int dem;
	double ans=0;
	cin>>dem;

	for(double i=1;i<=dem;i++){

	if(i<dem&&(int)(i+1)%10!=0){cout<<i<<'.'<<i+1<<'+';}else
	if(i<dem&&(int)(i+1)%10==0){cout<<i<<'.'<<(i+1/10)<<'+';}else
	if((int)(i+1)%10!=0){cout<<i<<'.'<<i+1<<'=';}else
	if((int)(i+1)%10==0&&i!=99){cout<<i<<'.'<<(i+1)/10<<'=';}else
	if((int)(i+1)%10==0&&i==99){cout<<i<<'.'<<(i+1)/100<<'=';}
	
	if(i<9){ans+=i+(i+1)/10;}else
	if(i<99){
		ans+=i+(i+1)/100;}
	else ans+=i+(i+1)/1000;
	}

	cout<<ans;
	
return 0;

}
