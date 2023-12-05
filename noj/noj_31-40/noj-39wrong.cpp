/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-39.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Thu Nov 16 19:45:20 2023
 ************************************************************************/

#include<iostream>

using namespace std;
//首先先写出一个储存位数和各位数字的数组，然后定义一个指针指向数组
//然后再定义一个递归的基斯函数
int length(long long int a){
	int n=0;
	while(a>0){n++;a/=10;}
	return n;
}
//l是总位数，m是新增数。
/*
void move(int *p,int l){
	
	for(int i=0;i<l;i++){
	*(p+l-i)=*(p+l-i-1);}
}
//上面的写法是显然超时的，如果我们可以把循环的次数减少，就可以提升一倍的速度。
void sum(int a[],int l){

	int m=0;
	for(int i=1;i<=l;i++){m+=a[i];}
	a[0]=m;
}*/
//上函数解决了求和与输入两个问题。遗憾的是在运算逻辑上有一些问题。

//给出一个函数sumove.

void sumove(int a[], int l){
	int m=0;
	for(int i=0;i<l;i++){
		a[l-i]=a[l-i-1];
		m+=a[l-i];
		}
	a[0]=m;	
	}

inline int IsKeith(long long int N){
	
	int l=length(N);

	int jld[l+1];

	for(int i=0;i<l;i++){
		jld[i]=N%10;
		N/=10;
	}
		
	while(jld[0]<N){
		sumove(jld,l);
		}
		if(jld[0]==N){return 1;}else
		return 0;
	
}
int main(){
	long long int N;
	
	cin>>N;

	if(IsKeith(N)==1){cout<<"Yes";} else {cout<<"No";}

	return 0;
}
