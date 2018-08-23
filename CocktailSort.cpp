#include<stdio.h>
// ���� -------------- �ڲ��Ƚ�����
// ���ݽṹ ---------- ����
// ���ʱ�临�Ӷ� ---- O(n^2)
// ����ʱ�临�Ӷ� ---- ���������һ��ʼ�Ѿ��󲿷�������Ļ�,��ӽ�O(n)
// ƽ��ʱ�临�Ӷ� ---- O(n^2)
// ���踨���ռ� ------ O(1)
// �ȶ��� ------------ �ȶ�

void Swap(int A[], int i, int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void CocktailSort(int A[], int n) {
    int left = 0;                            // ��ʼ���߽�
    int right = n - 1;
    while (left < right) {
        for (int i = left; i < right; i++) {  // ǰ����,�����Ԫ�طŵ�����
            if (A[i] > A[i + 1]) {
                Swap(A, i, i + 1);
            }
        }
        right--;
        for (int i = right; i > left; i--) {  // �����,����СԪ�طŵ�ǰ��
            if (A[i - 1] > A[i]) {
                Swap(A, i - 1, i);
            }
        }
        left++;
    }
}

int main() {
    int A[] = { 6, 5, 3, 1, 8, 7, 2, 4 };   // ��С������ð������
    int n = sizeof(A) / sizeof(int);
    CocktailSort(A, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
