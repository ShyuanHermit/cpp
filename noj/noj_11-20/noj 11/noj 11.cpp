#include <iostream>
using namespace std;
int main(){ 
int i=1,n;
double m=0,c;
do {scanf("%d",&n);}
while(!(1<=n&&n<=99));
		while(i<=n) {
m=m+i;			
c=(i+1)/10.0;//整数除以整数。 
while(c>=1){
	c=c/10;
}
/*while(i%10==0) {
	c=c/10;
}*/
m=m+c;
if ((i+1)%10==0){
		printf("%d.%d",i,(i+1)/10);
			if(i<n){
		printf("+");
		}
		else{
		printf("=");
		}
		i++;
}else{
		printf("%d.%d",i,i+1);
			if(i<n){
		printf("+");
		}
		else{
		printf("=");
		}
		i++;
		}
}
cout<<m<<endl;
	return 0;
}
