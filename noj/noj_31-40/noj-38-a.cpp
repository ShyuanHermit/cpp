#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
        return b>0?gcd(b,a%b):a;
}
int prime(int i){
        int j=1,ans=0;
        while(j<i){if (gcd(i,j)==1){ans+=2;}
                j++;
        }
        return ans;

};

int main(){

        int N,i;
        long long ans;

        cin>>N;

        if(N==1){ans=0;}
        else {i=2,ans=3;}

        while(i<N){

        ans+=prime(i);
        i++;

        }

        cout<<ans;
return 0;
        }
