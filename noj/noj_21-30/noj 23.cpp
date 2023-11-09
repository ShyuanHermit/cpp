#include <bits/stdc++.h>
using namespace std;
int main(){ 
	int i=0,t=0,s=1;
	int n;
	cin>>n;
	while(i<n){
		t=0;
		while(t<s){
		t=t+1;
		i++;
		if(i>=n){
			break;
				} 
			}
		s++;	
		}
		cout<<t;
		return 0;
}
