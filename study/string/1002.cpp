/*************************************************************************
    > File Name: /home/lvshy/cpp/study/string/1002.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Wed Nov 15 15:02:23 2023
 ************************************************************************/

#include<iostream>
#include<string>

//展开对于C++的使用哦。 

using namespace std;

int main(){

	string str1="lyx";
	string str2="521";
	string str3;
_1:
	str3=str1;cout<<str3<<'\t';
	str3=str2;cout<<str3<<endl;
_2:
	str3=str1+str2;
	cout<<str3<<'\n';
_3:
	int length=str3.size();
	cout<<length;
_4:


return 0;
}
