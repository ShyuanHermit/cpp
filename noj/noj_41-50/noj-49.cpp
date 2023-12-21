/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_41-50/noj-49.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Wed Dec 20 21:36:32 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){

	int m,n;
	 ans=0;
	cin>>m>>n;

	int jld[m][n];

		for(int s=0;s<m;s++)
			for(int t=0;t<n;t++){

				cin>>jld[s][t];
				if(jld[s][t]){ans++;}
				}
	if(ans<=m||ans<=n||ans<=0.05*(n*m)){cout<<"YES";}else
	cout<<"NO";
		
return 0;
}
