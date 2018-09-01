#include<stdio.h>
#include<windows.h>

// 0-670-82162-0
int main() {
    char a[15];
    char c[1];
    int b[10];
    int i,j;
    int sum = 0;
    scanf("%s", a);
    b[1] = a[0]-'0';
    b[2] = a[2]-'0';
    b[3] = a[3]-'0';
    b[4] = a[4]-'0';
    b[5] = a[6]-'0';
    b[6] = a[7]-'0';
    b[7] = a[8]-'0';
    b[8] = a[9]-'0';
    b[9] = a[10]-'0';
    for(i = 1; i <= 9; i++) {
        sum += i * b[i];
    }
    sum = sum % 11;
    if(sum == 10) {
        c[0] = 'X';
    }else {
        c[0] = sum + '0';
    }
    if(c[0] == a[12]) {
        printf("Right\n");
    }else {
        a[12] = c[0];
        printf("%s\n",a);
    }
    system("pause");
    return 0;
}