/*************************************************************************
    > File Name: /home/lvshy/cpp/study/string/1001.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Wed Nov 15 13:51:11 2023
 ************************************************************************/

#include<iostream>
#include<cstring>

//这里展开对于C语言的讲解。


using namespace std;

int main(){
	
	char str1[10] ="梁颖欣";
	char str2[6] ="521";
	char str3[16] ;
	cout<<"plz do not cin more than 15, take responsibility for your own computer";
	char *m=str3;//针对一个数组（字符串）使用指针，会将数组转化为一个常量指针。继而可以用指针指向它。
	cin>>m;
	cout<<*m<<endl;
	printf("%s\n",m);
	int length;

_1:
	char str4[7] ="lyx521";
	     strcat(str1,str2);
	     cout<<str1<<endl;
_2: 
	strcpy(str3,str1);
	cout<<str3<<endl;

_3:	
	length=strlen(str3);
	cout<<length;

_4:

return 0;
}
/*
在学习string中，我们希望把自己的一些体会表现出来，提高自己学习的效果。
1.def：首先是关于C的写法就是char一个数组。
	再次，在C++中，我们可以直接去定义一个变量,如string str1="lyx521";(哈哈哈，皮一下）
这也决定了，他是以数组的形式储存的。
2.关于string的运用:
	传递或者复制。即是说，我们可以将str1 move to str3 。通过strcpy函数来实现。
	输出string。这个非常的简单，(1)对于单个，直接cout或者printf，其中printf以%s的形式哦
				    (2)对于多个，可以利用加号，如str=str1+str3;
				    	也可以考虑strcat(s1,s2);
3.输出字符的长度。1.定义一个变量(int)=str1.size();
		  2.使用strlen这个函数。同样需要int来输出。
4.指针，这个在之后再详细的展开。

*/
