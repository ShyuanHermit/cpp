/*************************************************************************
    > File Name: /home/lvshy/cpp/sz.cpp
    > Author: lvshy
    > Mail: Shyuan231026nwpu@outlook.com 
    > Created Time: Sun Dec 24 20:48:09 2023
 ************************************************************************/
  #include <stdio.h>
        int a[99][99], b[99][99], c[99][99];
        int m = 0;
void add(int a[][99],int b[][99],int c[][99],int m){int i,j;
        for ( i = 0; i <  m; i++) {
                for (
                    j = 0; j < m; j++)
                        c[i][j] = a[i][j] + b[i][j];

                }
        }

void sub(int a[][99],int b[][99],int c[][99],int m){
        int i,j;

        for (i = 0; i < m; i++) {
                for (
                    j = 0; j < m; j++) {
                        c[i][j] = a[i][j] - b[i][j];
                        }
                }
        }

void mul(int a[][99],int b[][99],int c[][99],int m){
        int i,j;

        for (i = 0; i < m; i++) {
                for (j = 0; j < m; j++) {
                        c[i][j] = a[i][j]*b[i][j];
                        }
                }
        }

int main() {

        printf("方阵运算\n");
        printf("请输入方阵行列数");

        scanf("%d", &m);

        int i, j;

        printf("请输入方阵A的数据");
        for (i = 0; i < m; i++) {
                for (
                    j = 0; j < m; j++) {
                        scanf("%d", &a[i][j]);
                }
        }

        printf("请输入方阵B的数据");
        for (i = 0; i < m; i++) {
                for (
                    j = 0; j < m; j++) {
                        scanf("%d", &b[i][j]);
                }
        }

        while(1){
                printf("1——方阵相加\n");
                printf("2——方阵相减\n");
                printf("3——方阵相乘\n");
                printf("0——退出运算\n");
                printf("其他——出错\n");

        int p=0;
        scanf("%d", &p);

        switch(p){
                case 1:
                        add(a,b,c,m);
                        for(i=0;i<m;i++){
                                printf("\n");
                                for(j=0;j<m;j++)
                                        printf("%d ",c[i][j]);
                                        };
                                printf("\n");
                break;
                case 2:
                        sub(a,b,c,m);
                        for(i=0;i<m;i++){
                                printf("\n");
                                for(j=0;j<m;j++)
                                        printf("%d ",c[i][j]);
                                        };
                                printf("\n");
                break;

                case 3:
                        mul(a,b,c,m);
                        for(i=0;i<m;i++){
                                printf("\n");
                                for(j=0;j<m;j++)
                                        printf("%d ",c[i][j]);
                                        };
                                printf("\n");
                break;

        case 0:
                return 0;

        default:
                printf("错误\n");
                }
        }
        return 0;

}

