#include <iostream>
using namespace std;
int main(){ 
int i,b=1,c=0,d;
int T[100000];
cin>>d;
for(i=1;i<=d;i++){
	cin >> T[i];
		}
for(i=1;i<=d;i++){	
	while(b<T[i]){
		if (b%3==0||b%5==0){
			c=c+b;
				}	
				b++;
			}cout<<c<<endl;
	}
return 0;
}
