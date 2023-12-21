/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_41-50/noj-46.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Tue Dec 12 20:12:32 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

//实现线性回归求解。

void cost(int n,double m[][2]){
	
	int i=0;
	double xx=0,xy=0,x=0,y=0;
	double a,b;
	while(i<n){
		
		xx+=(m[i][0])*(m[i][0]);xy+=(m[i][0])*(m[i][1]);
		x+=m[i][0];y+=m[i][1];

		i++;
		}
	
	b = (xy-x*y/n)/(xx-x*x/n);
	a = y/n-b*x/n;
	m[0][0] = a;m[0][1] = b;
	}

int main(){

	int N,i=0;

	cin>>N;
	
	double bost[N][2];

	while(i<N){
		cin>>bost[i][0]>>bost[i][1];
		i++;
		}
cost_of_house:
	cost(N,bost);

	printf("Y=%.4f+%.4f*X",bost[0][0],bost[0][1]);
return 0;

}
