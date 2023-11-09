#include <bits/stdc++.h>

using namespace std;

int main(){ 
	int a,b,c,n;

	cin>>n;
	using namespace std;

	for(a=0; ;a++)
		for(b=0;b<a;b++)
			for(c=0;c<a;c++)
				if(c*c+b*b==a*a&&a+b+c==n)
					{cout<<a*b*c;return 0;}
				
	}//这种做是显然会超时的。
