#include <bits/stdc++.h>
using namespace std;
int main(){ 
int n,k;
cin>>n>>k;
int i=1,d=0;
do{
	d=d+k%i;
	i++;
}while(i<=n);
cout<<d;
	return 0;
}
