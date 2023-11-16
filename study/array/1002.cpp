/*************************************************************************
    > File Name: /home/lvshy/cpp/study/array/1002.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Wed Nov 15 21:05:16 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	int matrix[3][10];
	const int *p= matrix[0];
	for(a=0;a<3;a++);
		for(b=0;b<10;b++);
			{cin>>matrix[a][b];}
	cout<<matrix<<endl;//这里体现出，对于一个数组，一个储存常量的东西，它所在的地址。

	cout<<matrix+1<<endl;//+1，就是对于数组，在它的地址处，把所储存的东西向前移一位。

	cout<<*(matrix+1)<<endl;//转变为指针，其实就是引用了数组的地址（或者说分配的内存）输出它所储存的东西。

	cout<<*(matrix+1)+5<<endl;//这里是对于引用后的指针所在的地址进行操作，将其中所储存的东西向前移五位。

	cout<<*((*matrix+1)+5)<<endl;//对于刚刚操作的指针再次引用，并输出他所在地址所储存的东西

return 0;
}
