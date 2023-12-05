/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_41-50/noj42.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Mon Dec  4 15:44:51 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

//用来储存长度,l表示数字的长度，base表示进制。在数组初始化的时候用一次。
int length(int n,int b){
	
	int l=0;
	
	while(n>0){
	
		n/=b;
		l++;
		
		}
	
	return l;}
//用来将数值传递给数组。
int trans(int n,int N[],int b){
	int l=0,i=0;
	while(n>0){
		N[i] = n%b;
		n /= b;
		l++;i++;
		}
	return l;}
//在找出回文数后，返回它的值。
int tf(int n,int *p,int l){
	
	for(int i=0;i<=l/2;i++){
		if (*(p+i) != *(p+l-i-1)) {return 0;}
		}
	return n;	
	}

int main(){

	int N,b;
	cin>>N>>b;

	int ans=0;
	int l1 = length(N,10), l2 = length(N,b);

	int a[l1], c[l2];

	for(int i=1;i<=N;i++){
//		cout<<ans<<endl;
		
		if(i<10){
			l2=trans(i,c,b);
			ans+=tf(i,&c[0],l2);
			}else
		
		if(i>=10&&i<=100){
			switch(i){
			case 11:
			case 22:
			case 33:
			case 44:
			case 55:
			case 66:
			case 77:
			case 88:
			case 99:l2=trans(i,c,b);ans+=tf(i,&c[0],l2);break;}
			}else{

			l1=trans(i,a,10); 
			if(tf(i,&a[0],l1)==i){l2=trans(i,c,b); ans+=tf(i,&c[0],l2);}
			
			}
		}
cout<<ans;

return 0;
}
/*
这个问题的核心在于在除了10进制外的其他进制下，也进行一个判断。
至于关于十进制的判断，反倒简单了。
首先给出一个储存每一位数的数组，然后再取职值一判断。
然后关于如何转换进制。
	首先先转化为二进制，再转化为其他进制?
这是我们需要考虑的问题。
关于不同进制，我们所要找的是怎么转化，其他判据都一样。
最简单的办法，就是取模加除法。
*/
