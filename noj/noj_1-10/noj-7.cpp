#include <iostream>
using namespace std;
int main(){ 
	int m,t;
	cin>>m>>t;
	char str[10];
	printf("%0*d",t,m);//格式为：在前方加入0，需%0，格式则输入t,数字输入m。 
	return 0;
}
