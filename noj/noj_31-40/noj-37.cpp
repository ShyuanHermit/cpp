/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-37.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Thu Nov 16 11:10:23 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

//佩尔数的算法

int PA(int n){
    else if(n==1) return 1;
    else return 2*PA(n-1)+PA(n-2);
}

int PB(int n){
	int p0=0,p1=1,pn,i;
    for(int i=0;i<=n;i++)
        if(i==0) pn=p0;
        else if(i==1) pn=p1;
        else
        {
            pn=2*pn+p0;
            p0=p1;
			p1=pn;
        }
    return pn;
}

int main(){

	int n,ans;

	cin>>n;
	
	if(n%2==1){ans=PA(n);}else

	{ans=PB(n);}

	cout<<ans;
return 0;
}
