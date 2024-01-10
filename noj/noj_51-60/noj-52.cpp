/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_51-60/noj-52.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Thu Dec 21 22:06:56 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;
string str;

char translate(char s) {
	s=(int)s;
	if (s >= 97) {
		return char(s-32);
	}
	else {
		return char(s+32);
	}
	
}

int main(){
	//scanf("%[^\n]",str);不知道什么原因用不了。为了解决这个问题我们就使用getline.

	getline(cin,str);
	//cout<<str;	test
	for (int i = 0; i < str.size(); i++)
		if ((64<str[i]&&str[i]<91)||(96<str[i]&&str[i]<123))
			{cout<<translate(str[i]);}	
		else cout<<str[i];

return 0;
}
/*
很明显，思路是非常清晰的，从char转为int根据ASCII码值来更换大小写，
所以就有两种写法，C的话只需要定义一个char数组一个一个判断就可以了，
C++的话我们对string一个一个读取。相差不大，下来我们开始写吧。
有一个知识点，控制字符。
*/
