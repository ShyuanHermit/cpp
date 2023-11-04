/*************************************************************************
    > File Name: /home/lvshy/cpp/codecode/noj/noj_21-30/noj_21/noj_21AC.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Sat Nov  4 17:51:38 2023
 ************************************************************************/

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
