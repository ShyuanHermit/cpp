#include<iostream>//给欣欣大王的道歉，水平有限，写的很烂。 
#include<cmath>
using namespace std;
int main()
{
float x, y;
	for (y = 1.5f; y >-1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x <1.5f; x += 0.05f)
		{
			float a = x*x + y*y - 1;
			if ((a*a*a- x*x*y*y*y)<=0)
				cout << '*';
				else cout << " ";
		}
			cout <<endl;
	}
cout <<"                           Sorry"<<endl;
return 0;
}
