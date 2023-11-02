#include <bits/stdc++.h>
using namespace std;
int main(){ 
	int k,n=2,t,s,i;
	do{cin>>k;
	}while(!(k>=2));
	
	do{
		s=n;t=1;i=0;

		while(s>0){
			t=t*s--;
			i++;}

		n++;}while(!(t>=k&&t%k==0));

		cout<<i;
		
		return 0;
	}//TE
