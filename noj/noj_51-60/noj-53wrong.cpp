/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_51-60/noj-53.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Sat Dec 23 12:47:49 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

void str_spilt(string a[][100],string str,string sep){

	int m,n,l,j=0;
	m=str.size();
	n=sep.length();

	for(int i=0;i<=m-n;i++){

			l = 0;
		for(j=0;j<100-n-l;j++){
			while(str.substr(j,n) == sep){
				
				if(j>0) {break;}
				else {l++;} 
				
					}
			 
			 a[i][j] == str[j+l];
			 
				}
		}
	}

int main(){

	string str;//输入的字符串
	string sep;//分离部分
	string sarr[20][100];//储存分离部分
	
	getline(cin,str);
	getline(cin,sep);

	str_spilt(sarr,str,sep);
	
	for(int i=0;i<20;i++){
		
		if(i>=1) cout<<endl;

		if(sarr[i][0].empty()){break;}

		cout<<sarr[i]<<endl;
		
		}

	return 0;
}
