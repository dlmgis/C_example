/*�������*/
/*-------------------------------------------------------
����ĳ��ѧ��ĳ�ſγ̳ɼ�������󣬱�д����ʵ�ֶ��ֲ���ָ����ĳ���ɼ�
------------------------------------------*/
#include <stdio.h>
#define N 100
void readscore(float score[],int n);
void writescore(float score[],int n);
void sortscore(float score[],int n);
int searchscore(float score[],int n,float cj);
void main()
{
        float score[N],cj;
        int n,k;
        printf("����������");
        scanf("%d",&n);
        readscore(score,n);
        writescore(score,n);
        sortscore(score,n);
        printf("�����ɼ��Ӹߵ���Ϊ��\n");
        writescore(score,n);
        printf("����Ҫ���ҵĳɼ���");
        scanf("%f",&cj);
        k=searchscore(score,n,cj);
        if(k==-1)
                printf("Ҫ�ҵĳɼ������ڣ�\n");
        else
                printf("Ҫ�ҵĳɼ��ڵ�%d��λ��\n",k+1);
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
void sortscore(float score[],int n)
{
        int i,j,k;
        for(i=0;i<n-1;i++)
        {        k=i;
                for(j=i+1;j<n;j++)
                        if(score[j]>score[k])
                                k=j;
                if(k!=i)
                {
                        float t;
                        t=score[i];
                        score[i]=score[k];
                        score[k]=t;
                }
        }
}
int searchscore(float score[],int n,float cj)
{
        int low=0,high=n-1,mid;
        /****************Program***************/
        









        /****************End*****************/
        return -1;

}

