/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_31-40/noj-33-a.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Wed Nov 15 11:31:30 2023
 ************************************************************************/
/*你好，这是一个计算质数的程序。
我看到这个程序的时间复杂度为O(NlogN)，其中N是输入的数字。
如果你想要优化这个程序，你可以使用线性筛法，这样时间复杂度就会变成O(N)。
这个算法的原理是：对于每个数，只会被它的最小质因子筛掉，
而且每个数只会被它的最小质因子筛掉一次。希望这可以帮到你！*/
#include<bits/stdc++.h>

using namespace std;

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
这次为我们对于算法的时间复杂度有了新的体会。
为了避免超时，就不可以使用欧几里得算法，而是一个更换一种判断方法
在这里，姜老登为我们提供了一个思路，我们暂且按下不表。

--------------------------------------------------------------------------------

我们先来看看对于这个问题我们的描述：

根据互质数的定义，可总结出一些规律，利用这些规律能迅速判断一组数是否互质。

（1）两个不相同的质数一定是互质数。如：7和11、17和31是互质数。

（2）两个连续的自然数一定是互质数。如：4和5、13和14是互质数。

（3）相邻的两个奇数一定是互质数。如：5和7、75和77是互质数。

（4）1和其他所有的自然数一定是互质数。如：1和4、1和13是互质数。

（5）两个数中的较大一个是质数，这两个数一定是互质数。如：3和19、16和97是互质数。

	这里我们可以利用的，其实非常的有限。并且这样的操作简化步骤很有限。

--------------------------------------------------------------------------------	

我们现在来考虑一下姜老登的思路：高斯算法。











*/   
