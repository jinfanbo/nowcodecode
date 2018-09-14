#include<stdio.h>
#include<vector>
#include<windns.h>
using namespace std;

class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> a;
        vector<int> b;
        vector<int>::iterator it;
        for(it = array.begin(); it!=array.end(); it++) {
            if(*it % 2 == 0) {
                a.push_back(*it);
            }
            else {
                b.push_back(*it);
            }
        }
        b.insert(b.end(),a.begin(),a.end());
        array = b;
    }
};

class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> result;
        int num=array.size();
        for(int i=0;i<num;i++)
            {
            if(array[i]%2==1)
                result.push_back(array[i]);
        }
        for(int i=0;i<num;i++)
            {
            if(array[i]%2==0)
                result.push_back(array[i]);
        }
        array=result;
    }
};

int main() {
    
}