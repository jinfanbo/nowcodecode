#include<stdio.h>
#include<windows.h>
using namespace std;

int main() {
    int a[35];
    for(int i = 0; i < 35; i++) {
        scanf("%d",&a[i]);
        if(a[i] == 0) {
            break;
        }
    }
    int flag = 1;
    int sum = 0;
    for(int i = 0; a[i] != 0; i++) {
        if(a[i] == 1) {
            sum ++;
            flag = 1;
        }
        if(a[i] == 2) {
            sum += flag * 2;
            flag ++;
        }
    }
    printf("%d\n", sum);
    system("pause");
    return 0;
}
