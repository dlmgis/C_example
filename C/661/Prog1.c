/*�������*/
/*-----------------------------------*/
/* ����ĳ��ĳ��ĳ�գ����㲢���������һ��ĵڼ���
-------------------------------*/

#include <stdio.h>
#include <stdlib.h>
int DayofYear(int year,int month,int day);
void main()
{
        int choice;
        int year,month,day,yearday;
        printf("�����ꡢ�¡���\n");
        scanf("%d%d%d",&year,&month,&day);
        yearday=DayofYear(year,month,day);
        printf("%d��%d��%d������һ��ĵ�%d��\n",year,month,day,yearday);
}
int DayofYear(int year,int month,int day)  /* ����ڼ��� */
{
        int k,i,yearday=0;
        int m[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}};
        /**************Program**************/
        








        /***************End****************/
}

