#include<iostream>
using namespace std;
int main(){
unsigned char R,G,B,H,S,V,ma,mi;
cin>>R>>G>>B;
 //使用三元运算符来完成。 
V=(ma/255)*100;
if(V!=0) S=(ma-mi)/ma;
else S=0;
S=S*100;
if (ma=R) H=60*(0+(G+B)/(ma-mi));
else if (ma=G) H=60*(2+(B-R)/(ma-mi));
else if (ma=B) H=60*(4+(R-G)/(ma-mi));
if (H<0) H=H+360;
else H=H;
printf("%.4f,%.4f%%,%.4f%%",H,S,V);
	return 0;
}
