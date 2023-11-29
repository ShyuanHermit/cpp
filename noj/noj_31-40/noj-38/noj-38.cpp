/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-38.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Tue Nov 14 11:28:42 2023
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926
double VolaCalc(double r){
	return r*r*r/3*PI*4;}
double VolaCalc(double r,double h){
	return PI*r*r*h/3;}
double VolaCalc(long a){return a*a*a;
	}
double VolaCalc(double r,long h){return PI*r*r*h;
	}
double VolaCalc(long l,long w,long h){return l*w*h;
	}
double VolaCalc(double r,double R,double h){
return PI*h*h*(3*R-h)/3;}//
double VolaCalc(double r,double R,double h,double l){
	return 2*VolaCalc(r,R,h)+PI*r*r*l;}//
double VolaCalc(long r,double R,double h){
	return PI*(r*r+R*R+R*r)*h/3;}
double VolaCalc(double a,double b,long c){
	return 4*PI*a*b*c/3;}
double VolaCalc(long a,long h){return a*a*h/3;
	}
double VolaCalc(long d1,long d2,double l){
	return l*PI*(d1*d1-d2*d2)/4;}
int main(){
	

	int N,i=1;cin>>N;
/*cout<<"1";	
double r1;cin>>r1;

cout<<"2"; 
double r2,h2;cin>>r2>>h2;	

cout<<"3"; 
long a3;cin>>a3;

cout<<"4"; 
double r4;long h4;cin>>r4>>h4;

cout<<"5"; 
long l5,w5,h5;cin>>l5>>w5>>h5;

cout<<"6"; 
double r7,R7,h7,h7_,l7;cin>>r7>>R7>>l7;
	h7=R7+sqrt(R7*R7-r7*r7);
	h7_=R7-sqrt(R7*R7-r7*r7);

cout<<"7"; 
double r6,R6,h6,h6_;cin>>r6>>R6;
	h6=R6+sqrt(R6*R6-r6*r6);
	h6_=R6-sqrt(R6*R6-r6*r6);

cout<<"8"; 
long r8;double R8,h8;cin>>r8>>R8>>h8;

cout<<"9"; 
double a9,b9;long c9;cin>>a9>>b9>>c9;

cout<<"10"; 
long a10,h10;cin>>a10>>h10;

cout<<"11"; 
long d1,d2;double l11;cin>>d1>>d2>>l11;
	
 printf("%.6f\n" , VolaCalc(r1) );
 
 printf("%.6f\n" ,VolaCalc(r2,h2) );
 
 printf("%.6f\n" ,VolaCalc(a3) );
 
 printf("%.6f\n" ,VolaCalc(r4,h4) );
 
 printf("%.6f\n" ,VolaCalc(l5,w5,h5) );
 
 printf("%.6f " ,VolaCalc(r7,R7,h7,l7) );
	 printf("%.6f\n" ,VolaCalc(r7,R7,h7_,l7) );
 
 printf("%.6f " ,VolaCalc(r6,R6,h6) );
	 printf("%.6f\n" ,VolaCalc(r6,R6,h6_) );
 
 printf("%.6f\n" ,VolaCalc(r8,R8,h8) );
 
 printf("%.6f\n" ,VolaCalc(a9,b9,c9) );
 
 printf("%.6f\n" ,VolaCalc(a10,h10) );
 
 printf("%.6f\n" ,VolaCalc(d1,d2,l11) );*/

return 0;
}

/*姜老登的恶趣味，重载这么多的函数，纯纯恶心人咯。
我们不要落入他的陷阱，多用几个单词的事情。
这个时候，和ok老师学的东西就有作用了，我们可以命名sphere，cone等等。
当然，这里给出的，还是重载，因为复制粘贴，显然是更加方便的。*/
