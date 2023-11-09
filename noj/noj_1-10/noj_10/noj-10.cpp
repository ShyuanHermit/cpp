#include<iostream>
#include<algorithm> 
using namespace std;
int main(){
double R,G,B,H,S,V,ma,mi;
cin>>R>>G>>B;
while(!(R>=0&&R<=255)) cin>>R;
while(!(G>=0&&G<=255)) cin>>G;
while(!(B>=0&&B<=255)) cin>>B;
 ma = R;
if (G > ma) {
    ma = G;}
if (B > ma) {
    ma= B;}
 mi = R;
if (G < mi) {
    mi = G;}
if (B < mi) {
    mi= B;}
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
