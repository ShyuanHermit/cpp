#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,ans=0;
	
	scanf("%d%d",&a,&b);
	
	while (a)
	{
		printf("%d %d\n",a,b);
		if (a&1) ans+=b;
		a/=2;
		b*=2;
	}
	
	printf("%d\n",ans);
	
	return 0;
}
