#include<stdio.h>
#include<string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int sum = 0;
        for(int i = 0;i < J.size();i++){
            for(int j = 0;j < S.size();j++){
                if(J[i] == S[j]){
                    sum ++;
                }
            }
        }
        return sum;
    }
};

int main()
{
    /* code */
    int a;
    Solution A;
    char J[] = "z";
    char S[] = "aAAbbbb";
    a = A.numJewelsInStones(J,S);
    printf("%d\n", a);
    system("pause");
    return 0;
}

/*
python3

class Solution:
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        count = 0
        for i in range(len(J)):
            if J[i] in S:
                count += S.count(J[i])
        return count

*/