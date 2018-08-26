#include<stdio.h>
#include<windows.h>

int main() {
    int n,L,t;
    int i,j,p,k;
    //对n、L、t进行赋值 
    scanf("%d%d%d",&n,&L,&t);
    int a[n],b[n];
    //对n个小球的位置进行赋值 
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        b[i] = 1;
        //b[i]数组代表n个小球的速度方向，1为向右，-1为向左，初始值为向右 
    }
    //对t时间的位置进行判断 
    for(i=0;i<t;i++) {
        for(k=0;k<n;k++) {
             //如果小球到了起点或者终点，改变方向
            if(a[k]==0||a[k]==L) {
                b[k]*=-1;
            }
             //更新小球位置
            a[k]+=b[k];
        }
        //当小球相撞时，两个小球的方向都改变一次
        for(j=0;j<n-1;j++) {
            for(p=j+1;p<n;p++) {
                if(a[j]==a[p]) {
                    b[j]*=-1;
                    b[p]*=-1;
                }
            }
        }
    } 
    //输出a[i] 
    for(i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}