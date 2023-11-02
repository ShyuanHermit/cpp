#include <iostream>
using namespace std;

int main()
{
int d;
cin>>d;
	 if(d==1) cout<<"1,-128,127"<<endl;
else if(d==2) cout<<"1,0,255"<<endl;
else if(d==3) cout<<"2,"<<endl;
else if(d==4) cout<<"2,0,65535"<<endl;
else if(d==5) cout<<"4,-2147483648,2147483647"<<endl;
else if(d==6) cout<<"4,0,4294967295"<<endl;
else if(d==7) cout<<"4,-2147483648,2147483647"<<endl;
else if(d==8) cout<<"4,0,4294967295"<<endl;
else if(d==9) cout<<"8,-9223372036854775808,9223372036854775807"<<endl;
else if(d==10) cout<<"8,0,18446744073709551615"<<endl;
return 0;
}
