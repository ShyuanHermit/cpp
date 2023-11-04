/*************************************************************************
    > File Name: 1-007.cpp
    > Author: Haoming Bai
    > Mail: haomingbai@hotmail.com
    > Created Time: Thu Oct  5 16:13:23 2023
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
        int n,p;
        cin>>n;
        double r=0;
        double t;
        //飞天巡洋，动力先行；上天入地，计算先行
        for(int i=1;i<=n;i++){
                r=r+i;
                t=(i+1)/10.0;
                while(t>=1){
                        t=t/10.0;
                }
                p=i+1;
                while((p/10)*10==p){
                        p=p/10;
                }
                r=r+t;
                printf("%d.%d",i,p);
                if(i<n){
                        printf("+");
                }else{
                        printf("=");
                }
        }
        //善后工作同样重要，我们应当两手都要抓，两手都要硬。在把握大局的同时，不能忘记每一个细节
        cout<<r<<endl;;
        return 0;
}
