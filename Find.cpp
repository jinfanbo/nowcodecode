#include<stdio.h>
#include<windows.h>
#include<vector>
using namespace std;
#define HEIGHT 5
#define WIDTH 5
class Solution1 {
    public:
    bool Find(vector<vector<int> > array,int target) {
        int rowCount = array.size();
        int colCount = array[0].size();
        int i,j;
        if(rowCount == 0||colCount == 0) {
            return false;
        }
        if(target < array[0][0]||target > array[rowCount-1][colCount-1]) {
            return false;
        }
        for(i=rowCount-1,j=0;i>=0&&j<colCount;) {
            if(target == array[i][j])
                return true;
            if(target < array[i][j]) {
                i--;
                continue;
            }
            if(target > array[i][j]) {
                j++;
                continue;
            }
        }
        return false;
    }
};

class Solution2 {
    public:
    bool Find(int target, vector<vector<int> > array) {
        int rows = array.size();
        int cols = array[0].size();
        int i=rows-1,j=0;//左下角元素坐标
        while(i>=0 && j<cols) {//使其不超出数组范围
            if(target<array[i][j])
                i--;//查找的元素较少，往上找
            else if(target>array[i][j])
                j++;//查找元素较大，往右找
            else
                return true;//找到
        }
        return false;
    }
};

int main() {
    int a;
    Solution1 A;
    vector<vector<int> > array;
    //设置容器大小
    array.resize(HEIGHT);
    for(int i = 0; i < HEIGHT; ++i)
        array[i].resize(WIDTH);
    for(int i = 0;i < HEIGHT;i++) {
        for(int j = 0;j < WIDTH;j++) {
            scanf("%d",&a);
            array[i][j] = a;
        }
    }
    if(A.Find(array, 10)) {
        printf("good\n");
    }
    else {
        printf("bad\n");
    }
    system("pause");
    return 0;
}