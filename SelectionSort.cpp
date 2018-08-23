#include <stdio.h>

// ���� -------------- �ڲ��Ƚ�����
// ���ݽṹ ---------- ����
// ���ʱ�临�Ӷ� ---- O(n^2)
// ����ʱ�临�Ӷ� ---- O(n^2)
// ƽ��ʱ�临�Ӷ� ---- O(n^2)
// ���踨���ռ� ------ O(1)
// �ȶ��� ------------ ���ȶ�

void Swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void SelectionSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)         // iΪ���������е�ĩβ
    {
        int min = i;
        for (int j = i + 1; j < n; j++)     // δ��������
        {
            if (A[j] < A[min])              // �ҳ�δ���������е���Сֵ
            {
                min = j;
            }
        }
        if (min != i)
        {
            Swap(A, min, i);    // �ŵ����������е�ĩβ���ò������п��ܰ��ȶ��Դ��ң�����ѡ�������ǲ��ȶ��������㷨
        }
    }
}

int main()
{
    int A[] = { 8, 5, 2, 6, 9, 3, 1, 4, 0, 7 }; // ��С����ѡ������
    int n = sizeof(A) / sizeof(int);
    SelectionSort(A, n);
    printf("ѡ����������");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
