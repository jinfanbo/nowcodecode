#include<stdio.h>
#include<windows.h>

int main() {
    int n;
    int i,j,k;
    int max=0, maxi=0;
    scanf("%d", &n);
    int a, b[10001] = {0};
    for(i=0; i<n; i++) {
        scanf("%d", &a);
        b[a] += 1;
    }
    for(k=0; k<10001; k++) {
        if(b[k]>max) {
            max = b[k];
            maxi = k;
        }
    }
    printf("%d\n", maxi);
    system("pause");
    return 0;
}
