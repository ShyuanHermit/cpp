/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_21-30/noj-29.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Thu Nov  2 18:52:25 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;

	cin>>N;

	int n=1;int j=9;
	/*while n>0

	if j>n%10

	T:int j=n%10;

	n=n/10;till n=0;打印 N;
	
	F:N--;回到上一次循环（break）；
		*/
	
	while(n>0){
		n=N;

		while(n>0){
			
			if(j>=n%10){
				j=n%10;

				n=n/10;

				if(n==0){cout<<N<<'\n';return 0;}
			
				}else {j=9;N--;break;}/*请务必注意到j是具有返回值的，需要重置的。如对200进行操作，j==0;	
							而此时N变为了199，则无法进行下一步，则结束进程，无返回值。*/
	  		
			}	
		}
	}
