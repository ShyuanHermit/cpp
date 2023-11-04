#include <bits/stdc++.h>

using namespace std;

int main(){ 
	int a,b;
	
	cin>>a>>b;
	
	int n=b;
	
	while(a>=1) {
		cout<<a<<" "<<b<<endl;
		a=a/2;
		b=b*2;
		if (a%2!=0){
			n=n+b;
		} 
	}

cout<<n;

	return 0;
}
