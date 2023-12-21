/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_41-50/noj-50.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Wed Dec 13 18:30:21 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

#define N 10000000
//首先实现姜老登给出的埃氏筛
/*char vis[N+1];

void era_sieve(int n){
	int i,j;
	for(i=2;i<=n;i++){
		if(vis[i]) continue;
		for(j=i*2; j<=n; j+=2){
			vis[j]=1;
			}
		}
	}*/
//下面是欧拉筛，很明显，在上面出现了多次重复。
char eul[N+1];

int eul_sieve(int n){

	if(n<2){return 0;}

	int i,j;
	int ans = 0;

	for(i=2;i<=n;i++){

		if(eul[i]) continue;else ans++; 
		for(j=i*i; j<=n; j+=i){
			eul[j]=1;
				}				
			}

			
		return ans;	
	}

int main(){
	int n,ans;
	cin>>n;

	ans= eul_sieve(n);
	cout<<ans;

return 0;
}
/*
最重要的就是解决了姜老登留下的问题，即为什么可以遍历。有一个程序思维，那就是如果我们使用的是2*n;2已经
是一个质数了，那么我们就不应该使用，这样下来，这个素数前的每一个都已经遍历了。
*/
