/*�������*/
/*-----------------------------------------------*/
/*����swap��������д����ʵ�����������ж�ӦԪ��ֵ�Ľ���
---------------------------------------------*/ 
#include <stdio.h>
#define N 50
void main()
{
        int a[N],b[N],n;
        int i;
        void readdata(int a[],int n);
        void outputdata(int a[],int n);
        void swap(int *x,int *y);
        void exchange(int a[],int b[],int n);
        printf("��������Ԫ�ظ�����");
        scanf("%d",&n);
        readdata(a,n);
        readdata(b,n);
        exchange(a,b,n);
        printf("������\n");
        outputdata(a,n);
        outputdata(b,n);
        
}
void readdata(int a[],int n) /*������ */
{
        int i;
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
}
void outputdata(int a[],int n) /*�������*/
{
        int i;
        for(i=0;i<n;i++)
                printf("%d\t",a[i]);
        printf("\n");
}
void swap(int *x,int *y)  /*���������� */
{
        int t;
        t=*x;
        *x=*y;
        *y=t;
}
void exchange(int a[],int b[],int n)  /*�������������ӦԪ�� */
{
        int i;
        /***********Program *************/
		for(i=0;i<n;i++)
		{
			swap(&a[i],&b[i]);
		}
        /**************End****************/
}



