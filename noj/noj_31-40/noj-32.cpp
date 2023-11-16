/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-32.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Thu Nov 16 18:49:52 2023
 ************************************************************************/

#include<iostream>
#include<stdarg.h>

using namespace std;
int sum(int first,...){
	va_list m;

	va_start(m,first);

	int ans=first,j=first;

	do{
	ans+=va_arg(m,int);
	
	if(ans==j) break;

	j=ans;

	}while(1);
return ans;
}
int main(){

	int a,b,c,d,e,f;

	cin>>a>>b>>c>>d>>e>>f;

	int ans = sum(a,b,0) - sum(c,d,e,f,0);

	cout<<ans;

return 0;
}
/*由于我们是先完成了后面那道题，我们现在已经深刻地认识了这个头文件以及它的作用。
首先，最精妙的莫过于是这个停止的方式了。
是的，在赋初值后，由于后面的都是mnull，所以就会出现不再变化，并且停止循环。
其次，向ans赋初值时，ans=first;是为了保留第一个变量，而之前那个初值不进入运算，自然可以不保留。
*/
