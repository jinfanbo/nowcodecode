#include <stdio.h>
#include <limits.h>

// ���� -------------- �ڲ��Ƚ�����
// ���ݽṹ ---------- ����
// ���ʱ�临�Ӷ� ---- O(nlogn)
// ����ʱ�临�Ӷ� ---- O(nlogn)
// ƽ��ʱ�临�Ӷ� ---- O(nlogn)
// ���踨���ռ� ------ O(n)
// �ȶ��� ------------ �ȶ�


void Merge(int A[], int left, int mid, int right)// �ϲ��������ź��������A[left...mid]��A[mid+1...right]
{
    int len = right - left + 1;
    int *temp = new int[len];       // �����ռ�O(n)
    int index = 0;
    int i = left;                   // ǰһ�������ʼԪ��
    int j = mid + 1;                // ��һ�������ʼԪ��
    while (i <= mid && j <= right)
    {
        temp[index++] = A[i] <= A[j] ? A[i++] : A[j++];  // ���Ⱥű�֤�鲢������ȶ���
    }
    while (i <= mid)
    {
        temp[index++] = A[i++];
    }
    while (j <= right)
    {
        temp[index++] = A[j++];
    }
    for (int k = 0; k < len; k++)
    {
        A[left++] = temp[k];
    }
}

void MergeSortRecursion(int A[], int left, int right)    // �ݹ�ʵ�ֵĹ鲢����(�Զ�����)
{
    if (left == right)    // ������������г���Ϊ1ʱ���ݹ鿪ʼ���ݣ�����merge����
        return;
    int mid = (left + right) / 2;
    MergeSortRecursion(A, left, mid);
    MergeSortRecursion(A, mid + 1, right);
    Merge(A, left, mid, right);
}

void MergeSortIteration(int A[], int len)    // �ǵݹ�(����)ʵ�ֵĹ鲢����(�Ե�����)
{
    int left, mid, right;// ����������,ǰһ��ΪA[left...mid]����һ��������ΪA[mid+1...right]
    for (int i = 1; i < len; i *= 2)        // ������Ĵ�Сi��ʼΪ1��ÿ�ַ���
    {
        left = 0;
        while (left + i < len)              // ��һ�����������(��Ҫ�鲢)
        {
            mid = left + i - 1;
            right = mid + i < len ? mid + i : len - 1;// ��һ���������С���ܲ���
            Merge(A, left, mid, right);
            left = right + 1;               // ǰһ����������������ƶ�
        }
    }
}

int main()
{
    int A1[] = { 6, 5, 3, 1, 8, 7, 2, 4 };      // ��С����鲢����
    int A2[] = { 6, 5, 3, 1, 8, 7, 2, 4 };
    int n1 = sizeof(A1) / sizeof(int);
    int n2 = sizeof(A2) / sizeof(int);
    MergeSortRecursion(A1, 0, n1 - 1);          // �ݹ�ʵ��
    MergeSortIteration(A2, n2);                 // �ǵݹ�ʵ��
    printf("�ݹ�ʵ�ֵĹ鲢��������");
    for (int i = 0; i < n1; i++)
    {
        printf("%d ", A1[i]);
    }
    printf("\n");
    printf("�ǵݹ�ʵ�ֵĹ鲢��������");
    for (int i = 0; i < n2; i++)
    {
        printf("%d ", A2[i]);
    }
    printf("\n");
    return 0;
}
