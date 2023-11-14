/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-40.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Sun Nov 12 22:03:06 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

double pow_(double base);

double pow_(double base, int exp );

int main(){

	double base;int exp;
	cin>>base>>exp;
	
	printf("%.6lf\n%.6lf",pow_(base),pow_(base,exp));

return 0;
}

double pow_(double base)
{base*=base;return base;}
double pow_(double base, int exp )
{return exp==1 ? base : base*pow_(base,exp-1);}

/*我们尝试了三目运算符。重要的是我们尝试了一次递归，或者说迭代。
考虑一下，即可把程序分为一步步的操作。
即到1时为结束。*/
