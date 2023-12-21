/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-33/noj-33.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Wed Dec 13 18:10:29 2023
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//找到小于n与n互质的数的个数即可（欧拉函数）
//https://www.luogu.com.cn/problem/solution/P2158
int main()
{
    int n,ans,p[50000],i,j;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        p[i]=i;//赋初值（假定所有数都互质)
    }

    for(i=2;i<=n;++i)
    {
        if(p[i]==i)//如果i是质数
        {
            for(j=i;j<=n;j+=i)
            {
                //此处质数i直接带入欧拉函数进行计算
                //phi(j) = j * (1 - 1/p)
                p[j]=p[j]*(i-1)/i;
            }
        }
    }

    for(i=1;i<n;++i)
    {
        ans+=p[i];
    }
    printf("%d\n",(n==1)?0:ans<<1|1);//n=1时候特判
    return 0;
}

