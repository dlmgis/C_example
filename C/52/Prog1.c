/* ������� */
/*------------------------------------------*/
/* ����ĳ��ѧ��ĳ�ſεĳɼ�����಻����40�ˣ������������û��������룩��
�ú������ͳ�Ʋ���������
-----------------------------------------*/
#include <stdio.h>
#define N 40
int i;
int countfail(float score[],int n);
void readscore(float score[],int n);
void main()
{
        float score[N];
        int n,k;
        printf("����ѧ��������");
        scanf("%d",&n);
        readscore(score,n);
        k=countfail(score,n);
        printf("������ѧ������Ϊ��%d\n",k);

}
void readscore(float score[],int n) /*��ѧ���ɼ� */
{
        for(i=0;i<n;i++)
        {
                printf("�����%d���˵ĳɼ�:",i+1);
                scanf("%f",&score[i]);
        }
}
int countfail(float score[],int n) /*ͳ�Ʋ���������*/
{
        int count=0; /*���� */
        int i;
        /***************Program*************/
        for(i=0;i<n;i++)
		{
			if(score[i]<60);
			count++;
		}
		return count;
        /**************End******************/
}

