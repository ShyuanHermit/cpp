/*************************************************************************
    > File Name: /home/lvshy/cpp/study/3008.cpp
    > Author: lvshy
    > Mail: shyuan231016@outlook.com 
    > Created Time: Tue Mar 26 13:06:20 2024
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){

	string str1="刘莉",str2="张芳",str3="钟瑞";
	double a1=154.9,a2=547.2,a3=458.3;
	double h1=12345.6,h2=7452.96,h3=735464;
	
	cout<<left<<setfill(' ')<<setw(7)<<str1<<" "<<left<<setfill('-')<<setw(10)<<a1<<" "<<right<<setfill('*')<<setw(10)<<h1<<endl;

	cout<<left<<setfill(' ')<<setw(7)<<str2<<" "<<left<<setfill('-')<<setw(10)<<a2<<" "<<right<<setfill('*')<<setw(10)<<h2<<endl;

	cout<<left<<setfill(' ')<<setw(7)<<str3<<" "<<left<<setfill('-')<<setw(10)<<a3<<" "<<right<<setfill('*')<<setw(10)<<h3<<endl;


return 0;
}
