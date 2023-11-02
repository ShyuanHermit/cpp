/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_21-30/noj-29.cpp
    > Author: lvshy
    > Mail: shyuan051019@outlook.com 
    > Created Time: Tue Oct 31 11:26:21 2023
 ************************************************************************/

#include<iostream>
using namespace std;
int main{
	int N,n;
	cin>>N;

	while(N>0){
		n=N;
		int m=9;
		while(n>=0){
			if(n=0){
			cout<<N;
			return 0;
				}

			if(m>=n%10){
			m=n%10;
			}else {
				N--;
				break;	}

		n=n/10;}
		}	
return 0;
}
