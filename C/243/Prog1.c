/*------------------------------------------------
��������ơ�
--------------------------------------------------
���õݹ鷽������д����������n!��
����������ʵ�ּ����m��ȡk���������
 
����������Ҫ������������ݲ���С��0��
��m>0,k>0,m-k>0.
����û���������ݲ�������������ѭ�����룬
ֱ����������Ϊֹ������do��whileʵ�֣���
------------------------------------------------*/

#include <stdio.h>
unsigned long jiech(unsigned int n);
void main()
{
        
        int m,k;
        long zh;
        do
        {
                printf("����m,k��");
                scanf("%d%*c%d",&m,&k);
        }while(m<0||k<0||m-k<0);
        zh=jiech(m)/(jiech(k)*jiech(m-k));
        printf("zh=%ld\n",zh);
}
/* ����n!*/
unsigned long jiech(unsigned int n)
{
         /**********Program**********/
        int j;
		unsigned long jie=1;
		for(j=n;j>=1;j--)
		{
			jie*=j;
		}
		return jie;
         /********** End **********/
}
