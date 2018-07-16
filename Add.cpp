#include<stdio.h>
#include<windows.h>
using namespace std;
class Solution {
public:
    int Add(int num1, int num2) {
        if(num1&num2)
            return Add((num1&num2)<<1, num1^num2);
        else
            return num1^num2;
    }
};

int main() {
    Solution A;
    printf("%d\n", A.Add(123, 123));
    printf("%d\n", A.Add(5, 5));
    system("pause");
    return 0;
}