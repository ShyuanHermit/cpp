/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_21-30/noj-25/noj-25.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Mon Nov 6 10:42:51 2023
 ************************************************************************/

#include<bits/stdc++.h>/*显然，由于超时的问题，我们应该更新我们的算法思路。
			我们可以这样想，只要构造出两个数a,b,然后求出c,这样实质上只有两次循环，并且减少了一个
			判断。*/
using namespace std;

int main(){
        int a=0,b=0,c=0,n;

        cin>>n;
		for(b=0;;b++)
			for(c=0;c<=b;c++)
	{	
		a=sqrt(b*b+c*c);
		if(a*a==b*b+c*c&&a+b+c==n)
	{cout<<a*b*c;return 0;}
			}
        
}
