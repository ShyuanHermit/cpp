/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_41-50/noj45.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Tue Dec  5 11:39:49 2023
 ************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main(){

	double temp,press;
	int elev,runw,w,Flaps,Wet;

	cin<<temp<<press<<elev;

	do{cin<<runw;
		}while(w<41413||w>65000);

	cout<<"Flaps: 1, 5, 15";
	do{cin<<Flaps;
		}while(!(Flaps=1||Flaps=5||Flaps=15));
	
	do{cin<<Wet;
		}while(Wet!=0||Wet!=1);
	
	int p1,p2;
	double P2
	p1=temp/10*10;
	P2=(elev+1000*(29.92-press))/1000;
	p2=P2;
	if(p2!=P2){p2++;}

	

return 0;
}
