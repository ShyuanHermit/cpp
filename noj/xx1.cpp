/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/xx1.cpp
    > Author: lvshy
    > Mail: shyuan231016@outlook.com 
    > Created Time: Mon Mar 18 13:19:51 2024
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int swap1(int *a,int *b){
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;

	return 0;
	}

int main(){

	int a=10,b=20;
	
	swap1(&a,&b);
	
	cout<<a<<","<<b;


return 0;

}
