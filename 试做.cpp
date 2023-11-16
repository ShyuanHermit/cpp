/*************************************************************************
    > File Name: /home/lvshy/cpp/试做.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Wed Nov 15 21:37:32 2023
 ************************************************************************/

#include<stdio.h>
int main(){
	char gender,sport,dielt;
	float faHeight,moHeight,predicatHight;

	printf("Please input your gendrer:");
	scanf("%c",&gender);

	printf("Please input your mother's hight':");
	scanf("%f",&moHeight);

	printf("Please input your  father's hight':");
	scanf("%f",&faHeight);

	printf("111222");getchar();
	scanf("%c",&sport);

	printf("111222");getchar();
	scanf("%c",&dielt);

	if(gender=='M'){
	    predicatHight=(faHeight*0.923+moHeight)/2.0;
	         }
	else if(gender=='F'){
	    predicatHight=(faHeight+moHeight)*0.54;
	         }

	if(sport=='Y'){
	    predicatHight=predicatHight*(1+0.02);}

	if(dielt=='Y'){
	    predicatHight=predicatHight*(1+0.15);}

	printf("Your predicatHight is %f",predicatHight);

	return 0;

}
