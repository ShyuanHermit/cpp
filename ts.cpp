/*************************************************************************
    > File Name: /home/lvshy/cpp/ts.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Fri Dec  1 14:55:13 2023
 ************************************************************************/
#include<iostream>
using namespace std;

int length(long long int n){
	if(n/10==0) return 1;
	return 1+length(n/10);
}

void move(int *p,int l){
	int m=0,n=0;
	int s=*p;
	int *k=p;
	m=*k;
	n=*(k+1);
	for(int i=0;i<l-1;i++){
		k++;
		*k=m;
		m=n;
		n=*(k+1);
	}
	*p=m;
}

void add(int k[],int l){
	int sum=0;
	for(int i=0;i<l;i++) sum+=k[i];
	k[0]=sum;
}

int isk(long long a){
	int n=a;
	int l=length(n);
	int s[l];
	for(int i=0;i<l;i++){
		s[i]=n%10;
		n/=10;
	}
	for(int i=0;s[0]<=a;i++){
		move(&s[0],l);
		add(s,l);
		if(s[0]==a) return 1;
	}
	return 0;
}

int main(){
	int aaa;
	cin>>aaa;
	if(isk(aaa)==1) printf("Yes");
	else printf("No");
	return 0;
}
