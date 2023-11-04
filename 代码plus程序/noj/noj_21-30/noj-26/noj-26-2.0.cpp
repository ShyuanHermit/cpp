/*************************************************************************
    > File Name: 3-001.cpp
    > Author: Haoming Bai
    > Mail: haomingbai@hotmail.com
    > Created Time: Fri Oct 13 08:00:46 2023
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;


/*The volumn of the two cups are namely m liters and n liters and the total amount of the water needed is d liters.
Now we can try to define the option to fill and to empty the cup.
The actual amount of water in the cups are namely am,an.
I don't know exactly how many kinds of operations there will be during the whole process,so I can do nothing but to do my best to find them out one by one.
We can use use a set of global value to define the volume.*/

/*来自GPT的救赎：
 这是一个经典的水量问题。我们可以使用两个无刻度的杯子，容积分别为m和n，其中m<n，来得到体积为d的水。下面是一种解决方案：

1. 将杯子A装满水，然后将水倒入杯子B中，直到杯子B满或者杯子A空。
2. 如果此时杯子B已经满了，将杯子B中的水倒掉，然后将杯子A中的水倒入杯子B中，直到杯子B满或者杯子A空。
3. 重复步骤2，直到得到体积为d的水。

这个问题可以用数学公式来表示。假设我们最终要得到体积为d的水，那么我们可以表示为：

m * x + n * y = d

其中x和y是我们需要求解的未知数。这个方程有很多种解法，其中一种是使用扩展欧几里得算法。如果你想了解更多关于这个问题的信息，请参考&#185;。

希望这可以帮助你解决问题！

源: 与必应的对话， 2023/10/13
(1) OJ - 无题_华为机试有两个无刻度的量杯-CSDN博客. https://blog.csdn.net/xiaqunfeng123/article/details/51765987.
(2) OJ - 无题_华为机试有两个无刻度的量杯-CSDN博客. https://bing.com/search?q=%e7%94%a8%e4%b8%a4%e4%b8%aa%e6%b2%a1%e6%9c%89%e5%88%bb%e5%ba%a6%e7%9a%84%ef%bc%8c%e5%ae%b9%e7%a7%af%e5%88%86%e5%88%ab%e4%b8%bam%2cn+%28m%3cn%29%e7%9a%84%e6%9d%af%e5%ad%90%e5%be%97%e5%88%b0%e4%bd%93%e7%a7%af%e4%b8%bad+%28d%3cn%29%e7%9a%84%e6%b0%b4%ef%bc%8c%e5%ba%94%e8%af%a5%e6%80%8e%e4%b9%88%e5%81%9a%ef%bc%9f.
(3) 两个空量杯且没有刻度，5毫升和3毫升，怎么取4毫升 .... https://www.zhihu.com/question/277228736.
(4) 有3升和5升的两个没有刻度的玻璃杯,你能用两个杯在 .... https://www.yulucn.com/question/241699482.
(5) undefined. https://bing.com/search?q=.*/


int v[2],a[2],m[2],d;

void fill(int i){
    a[i]=v[i];
}

void empty(int i){
    a[i]=0;
}

void fill(int i,int j){
    //Use the water in bottle i to fill bottle j.
    if (a[i]>=v[j]-a[j]){
        a[i]-=(v[j]-a[j]);
        a[j]=v[j];
    }
}

void empty(int i,int j){
    //Pour all water in i to j.
    if (a[i]<=v[j]-a[j]){
        a[j]+=a[i];
        a[i]=0;
    }else{
        a[i]=0;
        a[j]=v[j];
    }
}

//所以，概括来讲，这个题目有两种算法：
//1.用小杯子先装水，通过小杯子将大杯子倒满，再将大杯子倒空，将小杯子中的水倒入大杯子，周而复始。
//2.用大杯子先装水，用大杯子不断装满小杯子，直至倒空大杯子，周而复始。

int main(){
    a[0]=0;a[1]=0;v[0]=0;v[1]=0;
    //cout<<v[1]<<","<<a[1]<<endl;
    //scanf("%d %d %d",&v[1],&v[2],&d);
    cin>>v[0]>>v[1]>>d;

    m[0]=1;m[1]=1;
    fill(1);
    while(a[0]!=d&&a[1]!=d){
        if(a[0]==d||a[1]==d){
            break;
        }
        while(a[1]>=v[0]){
            fill(1,0);
            m[1]++;
            if(a[0]==d||a[1]==d){
                break;
            }
            empty(0);
            m[1]++;
        }
        if(a[0]==d||a[1]==d){
            break;
        }
        empty(1,0);
        m[1]++;
        fill(1);
        m[1]++;
    }
    a[0]=0;a[1]=0;
    fill(0);
    while(a[0]!=d&&a[1]!=d){
            while(v[1]-a[1]>=a[0]){
                    empty(0,1);
                    m[0]++;
                    if(a[0]==d||a[1]==d){
                        break;
                    }
                    fill(0);
                    m[0]++;
                    if(a[0]==d||a[1]==d){
                        break;
                    }
            }
            if(a[0]==d||a[1]==d){
                break;
            }
            fill(0,1);
            m[0]++;
            if(a[0]==d||a[1]==d){
                break;
            }
            empty(1);m[0]++;
            if(a[0]==d||a[1]==d){
                break;
            }
            empty(0,1);m[0]++;
            if(a[0]==d||a[1]==d){
                break;
            }
            fill(0);m[0]++;
            if(a[0]==d||a[1]==d){
                break;
            }
    }
    //现在我们来进行第二个

    cout<<min(m[0],m[1])<<endl;
    return 0;
}
