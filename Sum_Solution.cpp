#include<stdio.h>
#include<windows.h>
using namespace std;
class Solution {
public:
    int Sum_Solution(int n) {
        int ans = n;
        ans && (ans += Sum_Solution(n - 1));
        return ans;
    }
};

int main() {
    Solution A;
    printf("%d\n", A.Sum_Solution(10));
    system("pause");
    return 0;
}