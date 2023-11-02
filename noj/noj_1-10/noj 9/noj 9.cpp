#include <iostream>
#include <cmath>
using namespace std;
int main(){ 
	double T,v;
	cin>>v>>T;
	double Winc =13.12+0.6125*T-11.37*pow(v,0.16)+0.3965*T*pow(v,+0.16);
	cout<<round(Winc)<<endl;//各类取整函数的应用。 
	return 0;
}/*思考一下，凭什么一样的算法，这种情况会WA*/ 
