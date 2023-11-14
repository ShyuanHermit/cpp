/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-33/noj-33jld.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Sat Nov 11 17:37:30 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
	return b>0?gcd(b,a%b):a;
}
int prime(int i){
	int j=1,ans=0;
	while(j<i){if (gcd(i,j)==1){ans+=2;}
		j++;
	}
	return ans;

};

int main(){

	int N,i;
	long long ans;

	cin>>N;

	if(N==1){ans=0;}
	else {i=2,ans=3;}

	while(i<N){
	
	ans+=prime(i);
	i++;
	
	}

	cout<<ans;
return 0;
	}

/*我们所需要的是写出一个判断互质的函数。由于质数的英文是prime number；命名我们的函数为prime.
考虑清楚我们的操作对象。显然，首先应该有一个输入值，有一个内变量。
运算逻辑是输入一个i，作为分母，然后有一个初始化的j来对函数进行操作。j的取值在1~i之间操作。
由于对应，所以每次都乘两个（只有1在题中出现一次。）
所以，非常明确，在函数中的值返回后加上ans的前s值就可以了。
问题在于检验互质，最简单的办法就是最大公因数为1.再次使用欧几里得算法，但是这样太慢了。
由于这个程序就是在试做，所以慢就慢些咯。*/
