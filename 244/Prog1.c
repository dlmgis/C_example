/*------------------------------------------------
��������ơ�
--------------------------------------------------

������ٷ����ú������ʵ�ּ�����������������С��������LCM��
���������е��øú������㲢����Ӽ����������������������С������
--------------------------------------------------*/
#include <stdio.h>
#include <math.h>
int lcm(int m,int n)
{
        
        int k;
        /**********Program**********/
        int a=m,b=n,t;
		if(m<n)
		{
			t=m;
			m=n;
			n=t;
		}
		while((k=m%n)!=0)
		{
			m=n;
			n=k;
		}
		return a*b/n;
        /********** End **********/
}
int max(int m,int n)
{
        if(m>n)
                return m;
        else
                return n;
}
void main()
{
        int m,n,gbs;
        int lcm(int m,int n);
        int max(int m,int n);
        do
        {
                printf("������������");
                scanf("%d%*c%d",&m,&n);
        }while(m<0||n<0);
        gbs=lcm(m,n);
        printf("%d��%d����С������Ϊ:%d\n",m,n,gbs);
}
