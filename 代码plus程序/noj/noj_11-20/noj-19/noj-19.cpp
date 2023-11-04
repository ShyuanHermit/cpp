#include <bits/stdc++.h>
using namespace std;
int main(){ 
 long long a,b,m;
do{scanf("%d" "%d" "%d",&a,&b,&m);}
while(!(1<=a&&a<=pow(10,18)&&1<=b&&b<=pow(10,18)&&1<=m&&m<=pow(10,18)));
cout<<a%m*b%m;
	return 0;
}
