#include<stdio.h>
#include<vector>
#include<algorithm>
#include<windows.h>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int i,j,k,p,q;
        int row[55],col[55];
        int len = grid.size();
        for(i = 0; i < len; i++) {
            int max_row = 0;
            int max_col = 0;
            for(j = 0; j < len; j++) {
                if(grid[i][j] > max_row) {
                    max_row = grid[i][j];
                }
            }
            for(k = 0; k < len; k++) {
                if(grid[k][i] > max_col) {
                    max_col = grid[k][i];
                }
            }
            row[i] = max_row;
            col[i] = max_col;
        }
        int flag = 0;
        int sum = 0;
        int m,w;
        for(m = 0; m < len; m++) {
            for(w = 0; w < len; w++) {
                if(row[m] > col[w]) {
                    flag = col[w];
                }
                else {
                    flag = row[m];
                }
                if(grid[m][w] < flag) {
                    sum = sum + flag - grid[m][w];
                    grid[m][w] = flag;
                }
            }
        }
        // for(m = 0; m < 4; m++) {
        //     for(w = 0; w < 4; w++) {
        //         printf("%d ", grid[m][w]);
        //     }
        //     printf("\n");
        // }
        return sum;
    }
};
// 3 0 8 4 2 4 5 7 9 2 6 3 0 3 1 0
int main() {
    int n,z,x,c;
    int result;
    vector<vector<int>> array(4);
    for(z = 0; z < 4; z++) {
        array[z].resize(4);
    }
    for(x = 0; x < 4; x++) {
        for(c = 0; c < 4; c++) {
            scanf("%d", &n);
            array[x][c] = n;
        }
    }
    Solution A;
    result = A.maxIncreaseKeepingSkyline(array);
    printf("%d\n", result);
    system("pause");
    return 0;
}
// int main() {
//     vector<vector<int> > array(4);
//     for(int i=0;i<4;i++) {
//         array[i].resize(5);
//     }
//     printf("%d\n", array[3].size());
//     system("pause");
//     return 0;
// }