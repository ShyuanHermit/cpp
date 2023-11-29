/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-38/noj-38-2.0.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Thu Nov 23 10:19:23 2023
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
	return PI*h*h*(3*R-h)/3;}
double VolaCalc(double r,double R,double h,double l){
        return 2*VolaCalc(r,R,h)+PI*r*r*l;}
double VolaCalc(long r,double R,double h){
        return PI*(r*r+R*R+R*r)*h/3;}
double VolaCalc(double a,double b,long c){
        return 4*PI*a*b*c/3;}
double VolaCalc(long a,long h){return a*a*h/3;
        }
double VolaCalc(long d1,long d2,double l){
        return l*PI*(d1*d1-d2*d2)/4;}
int main(){

	int N,i=1,t=0;

	cin>>N;

	double a[N][5];

	double (*p)[5] = a;

	long (*d)[5] = a ;

	while(i<=N){

		cin>>a[t][0];

		switch(*(*(p+t))){

		case 1 :	cin>>a[t][1];break;

		case 2 :	cin>>a[t][1]>>a[t][2];break;
		
		case 3 :	cin>>a[t][1];break;
		
		case 4 :	cin>>a[t][1]>>a[t][2];break;
		
		case 5 :	cin>>a[t][1]>>a[t][2]>>a[t][3];break;
		
		case 6 :	cin>>a[t][1]>>a[t][2]>>a[t][3]>>a[t][4];break;
		
		case 7 :	cin>>a[t][1]>>a[t][2]>>a[t][3];break;
		
		case 8 :	cin>>a[t][1]>>a[t][2]>>a[t][3];break;
		
		case 9 :	cin>>a[t][1]>>a[t][2]>>a[t][3];break;
		
		case 10 :	cin>>a[t][1]>>a[t][2];break;
		
		case 11 :	cin>>a[t][1]>>a[t][2]>>a[t][3];break;

		}
		
		i++; t++;
	}

	for(int l=0;l<N;l++){

		switch(*(*(p+l))){
		
		case 1 :	cout<<VolaCalc(*(*(p+l)+1));break;

                case 2 :        cout<<VolaCalc(*(*(p+l)+1),*(*(p+l)+2));break;

                case 3 :        cout<<VolaCalc(*(*(d+l)+1));break;

                case 4 :        cout<<VolaCalc(*(*(p+l)+1),*(*(d+l)+2));break;

                case 5 :        cout<<VolaCalc(*(*(d+l)+1),*(*(d+l)+2),*(*(d+l)+3));break;

                case 6 :        cout<<VolaCalc(*(*(p+l)+1),*(*(p+l)+2),*(*(p+l)+3),*(*(p+l)+4));break;

                case 7 :        cout<<VolaCalc(*(*(p+l)+1),*(*(p+l)+2),*(*(p+l)+3));break;

                case 8 :        cout<<VolaCalc(*(*(d+l)+1),*(*(p+l)+2),*(*(p+l)+3));break;

                case 9 :        cout<<VolaCalc(*(*(p+l)+1),*(*(p+l)+2),*(*(d+l)+3));break;

                case 10 :       cout<<VolaCalc(*(*(d+l)+1),*(*(d+l)+2));break;

                case 11 :       cout<<VolaCalc(*(*(d+l)+1),*(*(d+l)+2),*(*(p+l)+3));break;
		
		
		}
	}
return 0;
}
