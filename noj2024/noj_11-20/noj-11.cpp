/*************************************************************************
    > File Name: /home/lvshy/cpp/noj2024/noj_11-20/noj-11.cpp
    > Author: lvshy
    > Mail: shyuan231016@outlook.com 
    > Created Time: Tue Mar 26 13:54:10 2024
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){

	int num;

	int trans=0,up,lu;
	
	cin>>num;

	up=num;

	while(up!=0){
		
		lu=up%10;
		
		up=up/10;

		if(lu==6){lu=9;}else
		if(lu==9){lu=6;}else
		if(lu==2||lu==3||lu==4||lu==5||lu==7){cout<<"No";return 0;}

		trans=lu+trans*10;

	}

		if(trans==num){cout<<"Yes";}else
			 {cout<<"No";}
		
return 0;

}
