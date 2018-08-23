#include <stdio.h>

// ���� -------------- �ڲ��Ƚ�����
// ���ݽṹ ---------- ����
// ���ʱ�临�Ӷ� ---- O(n^2)
// ����ʱ�临�Ӷ� ---- O(nlogn)
// ƽ��ʱ�临�Ӷ� ---- O(n^2)
// ���踨���ռ� ------ O(1)
// �ȶ��� ------------ �ȶ�

void InsertionSortDichotomy(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int get = A[i];                    // ����ץ��һ���˿���
        int left = 0;                    // ���������ϵ�����������õģ����Կ����ö��ַ�
        int right = i - 1;                // �������ұ߽���г�ʼ��
        while (left <= right)            // ���ö��ַ���λ���Ƶ�λ��
        {
            int mid = (left + right) / 2;
            if (A[mid] > get)
                right = mid - 1;
            else
                left = mid + 1;
        }
        for (int j = i - 1; j >= left; j--)    // ������������λ���ұߵ������������ƶ�һ����λ
        {
            A[j + 1] = A[j];
        }
        A[left] = get;                    // ��ץ�����Ʋ�������
    }
}


int main()
{
    int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 };// ��С������ֲ�������
    int n = sizeof(A) / sizeof(int);
    InsertionSortDichotomy(A, n);
    printf("���ֲ�����������");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
