#include<stdio.h>
#include<math.h>
#include<windows.h>
int main(){
    int n;
    int a[1005];
    int i,j,k;
    int flag = 1,min = 10000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++){
        flag = 1;
        for(k=j+1;k<n;k++){
            if(a[j]-a[k] == 0){
                printf("%d\n", 0);
                flag = 0;
                break;
            }
            else if(abs(a[j]-a[k])<min){
                min=abs(a[j]-a[k]);
            }
        }
        if(flag == 0){
            break;
        }
    }
    if(flag != 0){
        printf("%d\n", min);
    }
    system("pause");
    return 0;
}