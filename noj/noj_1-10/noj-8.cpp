#include <iostream>
#include<cmath>
#define piz 3.1415926
using namespace std;
int main(){
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	a/=180/piz;b/=180/piz;c/=180/piz;d/=180/piz;//a/=10,¸³Öµ*1/10 
    double sig=cos(c-a)- cos(a)*cos(c)*(1-cos(d-b));
    double answer=acos(sig)*6371;
	printf("%.4fkm",answer);	
}
