#include <iostream>
#include <cmath>
using namespace std;

const long double e = M_E;
long double datum1(long double T);
long double datum2(long double T);
int main() {
	int a,A;
	int D;
	int i=0	;
    long double T[2000];
	cin >> a;//输入初始编号 
	cin >> A;//输入末尾编号 
	cin >> D;//输出最小值前编号
	do {cin >> T[i];
	i++;//输入处理数据
	}while (i<=A-a);
	while(a<=A) {
		do {
	long double CH = datum1(T[i]);
	cout << CH << endl;
	}while(a>=D);
	do {
	long double CH = datum2(T[i]);
	cout << CH << endl;
	}while(a<D);
    a++;
    i++;
	}
	return 0;
}

long double datum1(long double T) {
    long double a = T / 0.8928;
    long double b = log(a);
    long double c = -9.325 * pow(10, -5);
    long double d = b / c;
    return d;
}
long double datum2(long double T) {
    long double a = T / 0.8956;
    long double b = log(a);
    long double c = -9.325 * pow(10, -5);
    long double d = b / c;
    return d;
}
/*
这是目前来说相对简单的思路。
之后我们要实现的是：
1.对于多种不同的材料进行分析;
2.针对我们课堂上所了解的材料，达到多值函数的效果。
3.由于我们是浅析了中子穿透率于材料本身的关系，所以我们还要关注理解这个方程，做出更多的程序
4.由于这个题目的算法不是难事，我们应该增加图形界面。即可以让它读取纯文本文件，即以.text结尾的文件
*/
