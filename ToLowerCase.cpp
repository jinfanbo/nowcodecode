#include<stdio.h>
#include<string>
#include<windows.h>
using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        int len = str.size();
        for(int i = 0; i < len; i++) {
            str[i] = str[i] >= 'A' && str[i] <= 'Z' ? str[i] + 32: str[i];
        }
        printf("%s\n",str);
    }
};

int main()
{
    /* code */
    Solution A;
    char a[] = "Hello";
    A.toLowerCase(a);
    printf("%s\n", a);
    system("pause");
    return 0;
}
