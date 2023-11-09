#include <bits/stdc++.h>

using namespace std;

int main(){ 
	int a,b;
	int i=0;
	
		cin>>a>>b;
		int j=a*b;
	    int m=j;
	    int m2=j;
	do{
		m=m/10;
		i++;
		}while(m>0);
		int f=i;int e=0;
	
	cout<<setw (i+1)<<right<<a<<endl;
	cout<<"x"<<setw (i)<<right<<b<<endl;
	
	
	do {cout<<"-";
		i--;}while(i>=0);
		cout<<endl;

	int n1=1;	
	while(n1>0){n1=b/10;
	b=b%10;
	if(n1==0){cout<<"+";e++;}
	 cout<<setw (f+1-e)<<a*b<<endl;
		b=n1;
		e++;	}
		
	do {cout<<"-";
		f--;}while(f>=0);
	cout<<endl;
	cout<<" "<<m2;
		
	return 0;}
