/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_41-50/noj-41.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Tue Dec 12 21:27:39 2023
 ************************************************************************/

#include<bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main(){
	
	int m,N,i;

	double a,b,ans = 0;

	cin>>m>>a>>b>>N;
	
	double jld[N];
	
	srand(RAND_MAX);
	
	for(i=0;i<N;i++){
		jld[i] = a+ (b-a)*rand()/(RAND_MAX+1.0);
		}

	a = b - a;

	switch(m){
		
		case 1: for(i=0;i<N;i++){
					ans += pow(jld[i],4)/pow(M_E,jld[i])*a/N;
			}

		case 2: for(i=0;i<N;i++){
					ans += (pow(jld[i],2)+1)*a/N;
					}

		case 3: for(i=0;i<N;i++){
					ans += cos(jld[i])*a/N;
					}

		case 4: for(i=0;i<N;i++){
					ans += sqrt(jld[i])*(jld[i]-2)*a/N;
					}

		case 5: for(i=0;i<N;i++){
					ans += (2*sin(jld[i])-5*cos(jld[i]))*a/N;
					}

			}

		cout<<ans;

return 0;
}
