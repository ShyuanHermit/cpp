#include <iostream>
#include <cmath>
using namespace std;
int main(){ 
	double T,v;
	cin>>v>>T;
	double Winc =13.12+0.6125*T-11.37*pow(v,0.16)+0.3965*T*pow(v,+0.16);
	cout<<round(Winc)<<endl;//����ȡ��������Ӧ�á� 
	return 0;
}/*˼��һ�£�ƾʲôһ�����㷨�����������WA*/ 
