#include<stdio.h>
#include<vector>
#include<windows.h>
using namespace std;
#define Lengths 10

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if(array.size() == 0) {
            return 0;
        }
        int sum = array[0];
        int max = array[0];
        for(int i = 1;i < array.size();i++) {
            if(sum > 0) {
                sum += array[i];
            }
            else {
                sum = array[i];
            }
            if(sum > max) {
                max = sum;
            }
        }
        return max;
    }
};

int main() {
    //1 -2 3 10 -4 7 2 -5 1 1
    int a, rs;
    Solution A;
    vector<int> array;
    for(int i = 0;i < Lengths;i++) {
        scanf("%d", &a);
        array.push_back(a);
    }
    rs = A.FindGreatestSumOfSubArray(array);
    printf("%d\n", rs);
    system("pause");
    return 0;
}