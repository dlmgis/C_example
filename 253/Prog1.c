/*�������*/
/*----------------------------------------------
�Ӽ�������ĳ��ѧ��ĳ�ſγ̵ĳɼ�����д��������ƽ���ɼ�
----------------------------------*/
#include <stdio.h>
#define N 100
void readscore(float score[],int n);
void writescore(float score[],int n);
float averscore(float score[],int n);
void main()
{
        float score[N],cj;
        int n,k;
        printf("����������");
        scanf("%d",&n);
        readscore(score,n);
        writescore(score,n);
        printf("ƽ���ɼ�Ϊ��%f\n",averscore(score,n));
}
void readscore(float score[],int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                printf("�����%d��ѧ���ɼ���",i+1);
                scanf("%f",&score[i]);
        }
}
void writescore(float score[],int n)
{
        int i;
        printf("ѧ���ɼ��ֱ�Ϊ��\n");
        for(i=0;i<n;i++)
        {
                printf("%f\t",score[i]);
        }
        printf("\n");
}
float averscore(float score[],int n)
{
        float aver=0.0;
        int i;
        /***************Program*************/
        







        /***************End******************/
}

