/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_41-50/noj-43.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Tue Dec  5 10:45:43 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

void tf(int a[],int *p,int b){
	if(a[0]+a[1]<=a[3]&&a[2]<=a[4]){*(p+b)=1;}else
	if(a[0]+a[2]<=a[3]&&a[1]<=a[4]){*(p+b)=1;}else
	if(a[2]+a[1]<=a[3]&&a[0]<=a[4]){*(p+b)=1;}else
	*(p+b)=0;	
	}

int main(){
	int N;
	do{cin>>N;}while(N<1||N>36000);

	int jld[5];int ans[N];

	for(int i=0;i<N;i++){

		cin>>jld[0];
		cin>>jld[1];
		cin>>jld[2];
		cin>>jld[3];
		cin>>jld[4];
		
		tf(jld,&ans[0],i);

		}
	for(int m=0;m<N;m++){
		if(ans[m]){cout<<"YES"<<endl;}else
		cout<<"NO"<<endl;
		}

return 0;
}
/*
思考之后发现，将所有的情况都排列以后也就无非3种情况，所以
1.我们针对这三种情况分析优化；
2.直接枚举，没有想下去的必要。
我们果断第二种，都替电脑优化了，没有必要。
*/
