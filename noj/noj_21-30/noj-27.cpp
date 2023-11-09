/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_21-30/noj-27.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Mon Nov  6 11:45:20 2023
 ************************************************************************/

#include<bits/stdc++.h>//这个题本质上是在考察我们等差数列求和

using namespace std;

int jld(int a,int b);

int main(){

	int N,ans=1,b=2;

	cin>>N;/*完成了输入值之后，由于我们已经构建了jld这个可以计算i值得函数，只需进行一次循环。
			判断标准比较简单，我们可以反映出来一个最小判据即可。*/
while(b/2*(b+1)<=N){
		ans+=jld(N,b);

		b++;}

	cout<<ans;

		return 0;
	}

int jld(int a,int b){

	int j=1,l;

	for(j=0;;j++){
		
		l=(b*(b+2*j-1))/2;	

		if(l==a){return 1;}
			else if(l>a){return 0;}
			}

		}
/*现在，我们来说明一下jld function的作用。首先，它是对确定数位进行运算，即b的值是确定的。
我们要求非常简单，使用数列求和公式就可以大幅优化这比较的简单。*/
