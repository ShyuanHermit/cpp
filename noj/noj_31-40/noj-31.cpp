/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-31.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Mon Nov  6 14:42:09 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	unsigned long long N,X,ans;

	cin>>N>>X;

	if( N%2==1 ) {
	
	ans=3*(N-1);


	}else { if ( X <= N / 2) { ans = 3 * ( N - X );}
	        else ans = 3 * X;
		}

	cout<<ans;

return 0;
}
/*关于这个射线在反射时的规律，我们应该好好的去思考一下。
首先，当边长为奇数时，存在一个对称关系。我们可以发现此时的输出值是固定的。这非常的奇妙。
那么我们要关注的就是偶数的情况。
而奇妙的是，在偶数中，有一个递归的关系,同时也是一种对称关系，并且是不完全的对称。*/
