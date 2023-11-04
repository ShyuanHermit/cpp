#include <bits/stdc++.h>
using namespace std;
int main(){ 
int n,i=0;
int a=1,b=1,c=1,d=1;
do {scanf("%d",&n);}while(!(1<=n&&n<=50));
	for(a=0;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++)
				for(d=0;d<=9;d++)
					if(a+b+c+d==n){
						i++;
					}
	cout<<i;
	return 0;
}
