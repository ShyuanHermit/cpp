/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-33-a.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Wed Nov 15 11:31:30 2023
 ************************************************************************/
/*你好，这是一个计算质数的程序。
我看到这个程序的时间复杂度为O(NlogN)，其中N是输入的数字。
如果你想要优化这个程序，你可以使用线性筛法，这样时间复杂度就会变成O(N)。
这个算法的原理是：对于每个数，只会被它的最小质因子筛掉，而且每个数只会被它的最小质因子筛掉一次。希望这可以帮到你！*/
#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
	int t;
	if(a<b){t=a;a=b;b=t;}
	while(a%b){t=b;b=a%b;a=t;}
return b;
}
int prime(int i){ int j=1,ans=0;
        while(j<=i/2){if (gcd(i,j)==1){ans+=4;}
                j++;
        }
        return ans;}

int main(){
	 int N,i;
        long long ans;

        cin>>N;

        if(N==2){i=2,ans=3;}else
        {i=3,ans=5;}

        while(i<N){

        ans+=prime(i);
        i++;

        }

        cout<<ans;
return 0;
	}
/*由于我们在勤加思索之后依然是超时的，我们不禁需要思考一个问题：
我们使用欧几里得算法来控制输出，是正确的吗？
根据bing的回答，我们的程序是x*lnx式运行的，而更加快捷的办法应该是线性运行的。
意思是：如果是线性的话，会慢很多，至少可以进入1秒以内。
是这样的，我们就应该去理解一下这个逻辑。
其实，就是把欧几里得算法与判据放入一个函数，这样算法会更加的迅速。
这次为我们对于算法的时间复杂度有了新的体会。*/