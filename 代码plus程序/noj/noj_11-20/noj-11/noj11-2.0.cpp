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
        //����Ѳ�󣬶������У�������أ���������
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
        //�ƺ���ͬ����Ҫ������Ӧ�����ֶ�Ҫץ�����ֶ�ҪӲ���ڰ��մ�ֵ�ͬʱ����������ÿһ��ϸ��
        cout<<r<<endl;;
        return 0;
}
