#include <stdio.h>

// ���� -------------- �ڲ��Ƚ�����
// ���ݽṹ ---------- ����
// ���ʱ�临�Ӷ� ---- ���ݲ������еĲ�ͬ����ͬ����֪��õ�ΪO(n(logn)^2)
// ����ʱ�临�Ӷ� ---- O(n)
// ƽ��ʱ�临�Ӷ� ---- ���ݲ������еĲ�ͬ����ͬ��
// ���踨���ռ� ------ O(1)
// �ȶ��� ------------ ���ȶ�

void ShellSort(int A[], int n)
{
    int h = 0;
    while (h <= n)                          // ���ɳ�ʼ����
    {
        h = 3 * h + 1;
    }
    while (h >= 1)
    {
        for (int i = h; i < n; i++)
        {
            int j = i - h;
            int get = A[i];
            while (j >= 0 && A[j] > get)
            {
                A[j + h] = A[j];
                j = j - h;
            }
            A[j + h] = get;
        }
        h = (h - 1) / 3;                    // �ݼ�����
    }
}

int main()
{
    int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 };// ��С����ϣ������
    int n = sizeof(A) / sizeof(int);
    ShellSort(A, n);
    printf("ϣ����������");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
