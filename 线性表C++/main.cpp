#include <iostream>
using namespace std;
#define maxSize 100
//例题
//设将n (n>l)个整数存放到一维数组R中， 设计一个算法， 将R中的序列循环左移P (O<P<n)个位置，
//即将R中的数据由{X。, X1 ，Xn-l}变换为{Xp , Xp+l ,,Xn-l, X。, X1 ,,Xp-1}。
//要求： 写出本题的算法描述。
//本题不难，要实现R中序列循环左移P个位置，只需先将R中前P个元素逆置，
//再将剩下的元素逆置，最后将R中所有的元素再整体做一次逆置操作即可。
//本题算法描述如下：c++解法
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
//顺序表结构体定义
typedef struct
{
    int data[maxSize];
    int length;
}Sqlist;
//考试时用的最多的顺序表定义
//int A[maxSize];
//int n;
//单链表节点定义
typedef struct Lnode
{
    int data;
    struct Lnode *next;
}Lnode;
//双链表节点定义
typedef struct DLnode
{
    int data;
    struct DLnode *prior;
    struct DLnode *next;
}DLNode;
//分配存储空间的方法
//LNode *A = (LNode*)malloc(sizeof(LNode));
//本函数返回第一个比x大的元素的位置
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
//移动最右边元素，然后插入
void insertElem(Sqlist &L, int x)//因为L本身要改变，所以用引用型 这是C++的写法
{
    int p, i;
    p = findElem(L, x);//调用函数来找到位置p
    for(i = L.length - 1; i >= p; --i)
        L.data[i+1] = L.data[i];
    L.data[p] = x;
    ++(L.length);
}
//按元素值查找
int findElem1(Sqlist L, int e)
{
    int i;
    for(i = 0; i < L.length; ++i)
        if(e = L.data[i])
            return i;
    return -1;
}
//在顺序表的p位置上插入元素e
int insertElem1(Sqlist &L, int p, int e)
{
    int i;
    if(p < 0 || p > L.length || L.length == maxSize)
        return 0;
    for(i = L.length - 1; i >= p; --i)
        L.data[i+1] = L.data[i];
    L.data[p] = e;
    ++(L.length);
    return 1;
}
//删除顺序表下标为p的元素，并赋值给e
int deleteElem(Sqlist &L, int p, int &e)
{
    int i;
    if(p < 0 || p > L.length - 1)
        return 0;
    e = L.data[p];
    for(i = p; i < L.length - 1; ++i)
        L.data[i] = L.data[i+1];
    --(L.length);
    return 1;
}
//初始化顺序表
void initList(Sqlist &L)
{
    L.length = 0;
}
//求指定位置元素
int getElem(Sqlist L, int p, int &e)
{
    if(p < 0 || p > L.length - 1)
        return 0;
    e = L.data[p];
    return 1;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
