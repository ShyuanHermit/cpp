/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/xx2.cpp
    > Author: lvshy
    > Mail: shyuan231016@outlook.com 
    > Created Time: Mon Mar 18 13:46:10 2024
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main(){

		int i = 0;

		int sum = 0;

		int n = 0;

		int ret = 1;

		cin>>n;

	for(i = 1;i <= n;i++){

		int j;
	
		for(j = 1;j <= i;j++){
				ret *=j;
			}

		sum += ret;

		ret = 1;//复位
		}
	cout<<sum;
return 0;
}
