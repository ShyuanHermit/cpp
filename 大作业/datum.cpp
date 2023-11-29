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
	cin >> a;//�����ʼ��� 
	cin >> A;//����ĩβ��� 
	cin >> D;//�����Сֵǰ���
	do {cin >> T[i];
	i++;//���봦������
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
 
