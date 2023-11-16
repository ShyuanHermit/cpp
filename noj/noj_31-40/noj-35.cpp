/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-35.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Tue Nov 14 11:24:28 2023
 ************************************************************************/

#include<iostream>
#include<stdarg.h>

using namespace std;

double avg(int n,...){
	va_list j;//定义了变量列表的参数，可以认为是命名了一个针对于参数组的名称。

	va_start (j,n);//初始化变量列表。必须从最后一个确定变量开始。
	
	int i = n, l = n;//为什么赋值从n开始呢？这里需要思考一下。其实从哪里开始不重要，重要的是i与l必须一致。

	double N=n;//转换格式，保证得到正确的结果。

	do {	
		i+=va_arg(j,double);//这里务必写成double型,如果写成int就会报错。因为va_arg函数本来就指的是指示检索指定的变量类型的变量。
		
		if(i==l) break;
		
		l = i;

		}while(1);

	return 	i/N;//都减一就是都不减一。
}	
int main(){

	double a,b,c,d,e;
	
	cin>>a>>b>>c>>d>>e;

	double ans;

//		cout<<avg(2,a,b)<<'\n'<<avg(3,c,d,e)<<endl;	作用是使输出结果可视化。

	ans=avg(2,a,b) - avg(3,c,d,e);

	printf("%.4f",ans);
return 0;
}
