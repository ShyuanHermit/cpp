/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-38.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Tue Nov 14 11:28:42 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

double VolaCalc(double r);
double VolaCalc(double r,double h);
double VolaCalc(long a);
double VolaCalc(double r,long h);
double VolaCalc(long l,long w,long h);
double VolaCalc(double r,double R,double h);
double VolaCalc(double r,double R,double h,double l);
double VolaCalc(long r,double R,double h);
double VolaCalc(double a,double b,long c);
double VolaCalc(long a,long h);
double VolaCalc(long d1,long d2,double l);
int main(){
	
	double r1;cin>>r1;

	double r2,h2;cin>>r2>>h2;	

	long a;cin>>a;

	double r4;long h4;cin>>r4>>h4;

	long l,w,h5;cin>>l>>w;

	double r6,R,h6,h6_;cin>>r6>>R>>h6;
	h6=R+sqrt(R*R-r6*r6);
	h6_=R-sqrt(R*R-r6*r6);

	double r7,R7,h7,h7_,l7;cin>>r7>>R7>>l7;
	h7=R+sqrt(R7*R7-r7*r7);
	h7_=R-sqrt(R7*R7-r7*r7);

	long r8;double R8,h8;cin>>r8>>R8>>h8;

	double a9,b;long c;cin>>a9>>b>>c;

	long a10,h;cin>>a10>>h;

	long d1,d2;double l11;cin>>d1>>d2>>l11;
	


 printf("%.6f\n" , VolaCalc(r1) );
 printf("%.6f\n" ,VolaCalc(r2,h2) );
 printf("%.6f\n" ,VolaCalc(a) );
 printf("%.6f\n" ,VolaCalc(r4,h4) );
 printf("%.6f\n" ,VolaCalc(l,w,h5) );
 printf("%.6f\t" ,VolaCalc(r6,R,h6) );
	 printf("%.6f\n" ,VolaCalc(r6,R,h6_) );
 printf("%.6f\t" ,VolaCalc(r7,R7,h7,l7) );
	 printf("%.6f\n" ,VolaCalc(r7,R7,h7_,l7) );
 printf("%.6f\n" ,VolaCalc(r8,R8,h8) );
 printf("%.6f\n" ,VolaCalc(a9,b,c) );
 printf("%.6f\n" ,VolaCalc(a10,h) );
 printf("%.6f\n" ,VolaCalc(d1,d2,l) );


return 0;
}
double VolaCalc(double r){return 4*M_PI*r*r*r/3;}
double VolaCalc(double r,double h){return M_PI*r*r*h/3;}
double VolaCalc(long a){return a*a*a;}
double VolaCalc(double r,long h){return M_PI*r*r*h;}
double VolaCalc(long l,long w,long h){return l*w*h;}
double VolaCalc(double r,double R,double h){return M_PI*h*h*(3*R-h)/3;}
double VolaCalc(double r,double R,double h,double l){return 2*VolaCalc(r,R,h)+M_PI*r*r*l;}
double VolaCalc(long r,double R,double h){return M_PI*(r*r+R*R+R*r)*h/3;}
double VolaCalc(double a,double b,long c){return 4*M_PI*a*b*c/3;}
double VolaCalc(long a,long h){return a*a*h/3;}
double VolaCalc(long d1,long d2,double l){return l*M_PI*(d1*d1-d2*d2)/4;}

/*姜老登的恶趣味，重载这么多的函数，纯纯恶心人咯。
我们不要落入他的陷阱，多用几个单词的事情。
这个时候，和ok老师学的东西就有作用了，我们可以命名sphere，cone等等。
当然，这里给出的，还是重载，因为复制粘贴，显然是更加方便的。*/
