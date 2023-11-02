/*************************************************************************
    > File Name: /home/lvshy/cpp/noj/noj_21-30/noj-27.cpp
    > Author: lvshy
    > Mail: shyuan051019@outlook.com 
    > Created Time: Thu Nov  2 09:16:33 2023
 ************************************************************************/

#include<bits/stdc++.h>//目前来说解决不了这个问题，就抄了。
using namespace std;
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
int main{
/*为了实现对于倒水问题的程序化，我们需要理解背后的原理。既是说关于此问题的欧几里得算法。
欧几里得算法是一直找出最大公因数的方法。
它的运行逻辑是：首先，较大数减去最小数（这个过程通过取模运算可以实现，
在先前一道例题（分数加减乘除）我们给出过此程序的三元运算符的表达方式），
循环，直至较大数小于较小数；
然后重复，直至输出结果为零，此时的最小值即所求的最大公因数。


除此之外，我们要进一步解决这个问题，应该要程序化的思考问题；
首先应该发现，再到谁是，有三个基本动作：1.从外界倒水至满；
					2.在两杯之间倒水，至一杯满或者另一杯子空；
					3.向外界倒水，直至空杯；
在返回题目的提示，看出来，这三种操作带来了两种思路。
即是说，我们要么执行1、2；要么执行2、3；
当然，可以出现1、3；但是这是毫无意义的，不会带来最小解。
	单来说，就是不停的从量杯m往n中倒水，然后n清空的过程。 
	果此时m == k，结束； 
	不相等，从m中倒水到n中直至n满，或者直至m空；
	若n满，m != k，则清空n，重复上述动作。
*/
//以上的资料来源于wiki以及github。
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
