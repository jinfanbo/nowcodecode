#include<stdio.h>
#include<windows.h>
using namespace std;
class Solution {
public:
    bool duplicate(int numbers[], int length, int duplication) {
        if(numbers == NULL||length <= 0) {
            return false;
        }
        for(int i = 0;i < length;i++) {
            if(numbers[i] < 0||numbers[i] > length-1) {
                return false;
            }
        }
        for(int i = 0;i < length;i++) {
            while(numbers[i]!=i) {
                if(numbers[i] == numbers[numbers[i]]) {
                    duplication = numbers[i];
                    printf("%d\n", duplication);
                    return true;
                }
                int temp = numbers[i];
                numbers[i] = numbers[temp];
                numbers[temp] = temp;
            }
        }
        return false;
    }
};

int main() {
    Solution A;
    int a;
    int numbers[] = {1,2,3,5,4,2,4,5,5,6};
    A.duplicate(numbers, 10, a);
    system("pause");
    return 0;
}