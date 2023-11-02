#include <bits/stdc++.h>

using namespace std;

int main(){ 
	int a,b,c,n,t;

	cin>>n;
	
	do {
	for(a=0; ;a++)
		for(b=0; ;b++)
			for(c=0; ;c++)
				if(a>c){
						t=c;
						c=a;
						a=t;
					}
				if(b>c){
						t=c;
						c=b;
						b=t;
					}
				if(a*a+b*b==c*c){
				
				
				cout<<z;
				}
			
	
	return 0;
}
