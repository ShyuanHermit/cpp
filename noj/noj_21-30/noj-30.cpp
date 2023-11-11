/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_21-30/noj-30.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Sat Nov 11 14:47:50 2023
 ************************************************************************/
/*这就是姜老登的一个幻术，由于我们根本就处理不了前置零的问题，所以，这本来就是一个排列组合题！
以他笨拙的数学水平加上他喜爱卖弄数学的性格，发现了，他就是在考察一个组合数。
更过分的是，他竟然放在了枚举这一季里，你可不要为他的幻术所骗哦！*/
#include<bits/stdc++.h>

using namespace std;

int main(){

	int N;
	cin>>N;

	int l=1;

	long long d=pow(10,9)+7,ans=1;
	while(N>0){
	
		switch(l){
		
		case 1: ans*=5;ans=ans%d;break;

		case 2: ans*=4;ans=ans%d;break;
			}

		l=l%2+1;
		N--;
	}
	cout<<ans<<endl<<d;

return 0;
}
