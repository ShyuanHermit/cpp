#include <bits/stdc++.h>
using namespace std;
int main(){ 
 int a,b,c=0,ans,i=0;
 cin>>a;
 ans=a;
do{	
	while(a%10>=0&&a!=0){
	 	b=a%10;
	 	a=a/10;
	 	c=c+b;
	 	} 
		 ans=ans-c;
		 a=ans;
	 	i++;
	}while(ans!=0);
cout<<i;
	return 0;
}
