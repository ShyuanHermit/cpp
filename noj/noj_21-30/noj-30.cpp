/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_21-30/noj-30.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Tue Nov  7 10:40:15 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){
	long long N,l=0,ans=0;

	cin>>N;

	/*给定长度即给定了操作数的大小，所以只需要一步步操作并计数，每次进行取模运算。
	写出操作所需的伪代码：从pow(10,N-1)~pow(10,N)进行操作，为了在switch中可以正常的使用，只需使用位运算
	既是j(被操作数）&1，如果是奇数，得一，对结果%2+1，执行第二部操作。这里面其实有一个潜在的周期函数
	对于case 2，既是判断是不是在奇数位，那就需要一个周期函数来约束，即是说，定义一个l，l=0，l=l%2+1,保证l得知永远为1或者2
	当l为1时，必须要有判断，case 1 right,ans++ mod；case 2 error.*/
	
	long long i =pow(10,N-1),j,d;

while(i<pow(10,N)){
		
		l=l%2+1;
		j=i;

	while(j>0){

			switch(j&1%2+1){
				
				case 1:if(l=1){goto error;}
					else if(l=2){j/=10;break;}

				case 2: if(l=1){j/=10;break;}
					else if(l=2){goto error;}
					}
				}
		error:
			i++;
			d=pow(10,9)+7;

			if(j==0){++ans%d;}	
			
			}	
	cout<<ans;

	return 0;} 
