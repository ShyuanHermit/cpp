#include <bits/stdc++.h>

using namespace std;

int main(){ 
	int x,y;
	
	scanf("%d",&x) ;
	
	y=x/60;
	x=x%60;
	
	printf("%d hour %d minute ",y,x) ;
	
	return 0;
}
