/*************************************************************************
    > File Name: /home/lvshy/cpp/noj2024/noj_1-10/noj-9.cpp
    > Author: lvshy
    > Mail: shyuan231016@outlook.com 
    > Created Time: Tue Mar 26 13:38:45 2024
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){

	double wind,temp;
	double wind_chill;
	
	cin>>wind>>temp;
	
	wind_chill=13.12+0.6125*temp-11.37*pow(wind,0.16)+0.39365*temp*pow(wind,0.16);

	cout<<round(wind_chill)<<endl;

return 0;

}
