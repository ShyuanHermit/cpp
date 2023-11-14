/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-36.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Mon Nov 13 21:08:02 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int prime_number(int i,int a,int b){
	int ans=0;
while(i<a){i+=6;}
while(i>=10&&i<=b){
	for(int n=2;n<=sqrt(i);n++){
		if(i%n==0){goto error1;}
		}
	ans++;
	error1:i=i+6;		
	}
	return ans;
};
int main(){

/*首先，我们发现，k值的选择是至关重要的。在1-10时，我们不进行这个操作，即只需验证到1、2步即可；
到了10-100之间，k=6就是一个很好的选择。当然到100-10000考虑K=30，这个时候的计算逻辑就很可观了。
接下来，一直验证到sqrtN即可。
*/
	int a,b;
	cin>>a>>b;

	int i=a,ans=0;

	if(i==2){ans++;}

	while(i<=10&&i<=b){
		for(int n=2;n<i;n++){
			
			if(i%n==0){goto error;}
				
				}
				ans++;
			error:	i++;	
						
		}

/* 来深刻的理解一下我们在求素数的逻辑，即是说我们在枚举的部分非常的有限了。
只需写出通式并验证就可以了。
其他的逻辑同我们所说是相似的。
*/
		if(i>10&&i<=b){
			int n=1;
			ans+=prime_number(6*n+1,a,b);

			ans+=prime_number(6*n+5,a,b);
				}
	cout<<ans;

	return 0;
}
/*好啦，现在我们来直面恐惧，来解决在我们面前的这道prime number.
好啦，不难发现，我们急需一个解决质数的问题，目前而言，我们已经在质数上失败了三次，
为了一劳永逸的解决将老登，我们需要一些独特的算法。
为此，我们在写出了几版愚蠢的运算逻辑后，我觉得有必要去理解一下更加精妙的算法。
为此，我去请教GitHub上的大佬。
在此之前，我们还可以面向结果编程，显然不会超时。
所以，我们可以利用一个超时的程序找结果，然后打表即可。
当然，这个想法过于疯狂了。
我们不妨先用姜老登的逻辑来试试。*/
