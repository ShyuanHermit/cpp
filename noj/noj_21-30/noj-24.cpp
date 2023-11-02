/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_21-30/noj-24.cpp
    > Author: lvshy
    > Mail: shyuan051019@outlook.com 
    > Created Time: Tue Oct 31 13:26:40 2023
 ************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main(){
        long long k,n=2,t,s,i;
        do{cin>>k;
        }while(!(k>=2));

        do{
                s=n;t=1;i=0;

                while(s>0){
                        t=t*s--;
                        i++;}

                n++;}while(!(t%k==0));

                cout<<i;

                return 0;
        }//TE

