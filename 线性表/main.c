#include <stdio.h>
#include <stdlib.h>
#define maxSize 100
//����
//�轫n (n>l)��������ŵ�һά����R�У� ���һ���㷨�� ��R�е�����ѭ������P (O<P<n)��λ�ã�
//����R�е�������{X��, X1 ��Xn-l}�任Ϊ{Xp , Xp+l ,,Xn-l, X��, X1 ,,Xp-1}��
//Ҫ�� д��������㷨������
//���ⲻ�ѣ�Ҫʵ��R������ѭ������P��λ�ã�ֻ���Ƚ�R��ǰP��Ԫ�����ã�
//�ٽ�ʣ�µ�Ԫ�����ã����R�����е�Ԫ����������һ�����ò������ɡ�
//�����㷨�������£�c++�ⷨ
//#include<iostream>
//#define N 50
//using namespace std;
//void Reverse(int R[],  int l,  int r)
//{
//    int i,  j;
//    int temp;
//    for (i = l,  j = r;  i < j;  ++i,  --j)
//    {
//        temp = R[i];
//        R[i] = R[j];
//        R[j] = temp;
//    }
//}
//void RCR(int R[], int n, int p)
//{
//    if(p <= 0 || p >= n)
//        cout<<"ERROR"<<endl;
//    else
//    {
//        Reverse(R, 0, p-1);
//        Reverse(R, p, n-1);
//        Reverse(R, 0, n-1);
//    }
//}
//int main()
//{
//    int L, i
//    int R[N], n;
//    cin>>L;
//    cin>>n;
//    for(i = 0; i <= n-1; ++i)
//        cin>>R[i];
//    RCR(R, n, L);
//    for(i = 0; i <= n-1; ++i)
//        cout<<R[i]<<" ";
//    cout<<endl;
//    return 0;
//}
//˳���ṹ�嶨��
typedef struct
{
    int data[maxSize];
    int length;
}Sqlist;
//����ʱ�õ�����˳�����
//int A[maxSize];
//int n;
//������ڵ㶨��
typedef struct Lnode
{
    int data;
    struct Lnode *next;
}Lnode;
//˫����ڵ㶨��
typedef struct DLnode
{
    int data;
    struct DLnode *prior;
    struct DLnode *next;
}DLNode;
//����洢�ռ�ķ���
//LNode *A = (LNode*)malloc(sizeof(LNode));
//���������ص�һ����x���Ԫ�ص�λ��
int findElem (Sqlist L, int x)
{
    int i;
    for(i = 0; i < L.length; ++i)
    {
        if(x < L.data[i])
        {
            return i;
        }
    }
    return i;
}



int main()
{
    printf("Hello world!\n");
    return 0;
}
