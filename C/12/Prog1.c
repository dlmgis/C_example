/*------------------------------------------------
��������ơ�
----------------------------------------------
��̴Ӽ�������ĳ��ĳ�£��������꣩����switch������������ĸ���ӵ�е�������
Ҫ���������Լ������·ݲ��ںϷ���Χ�ڵ������
��֪�����2����29�죬ƽ���2����28�졣
�ж�year�Ƿ�Ϊ����������ǣ�
��1��        year�ܱ�4���������ܱ�100����������
��2��        year�ܱ�400������

----------------------------------------------*/

#include <stdio.h>
void main()
{
        int year,month,days,leap=0;
        printf("��������ݺ��·�:");
        scanf("%d%*c%d",&year,&month);
          /**********Program**********/
          switch(month)
		  {
		  case 1:
		  case 3:
		  case 5:
		  case 7:
		  case 8:
		  case 10:
		  case 12:
			  days=31;
			  break;
		  case 4:
		  case 6:
		  case 9:
		  case 11:
			  days=30;
			  break;
		  case 2:
			  if(year%4==0&&year%100!=0||year%400==0)
				  days=29;
			  else
				  days=28;
			  break;
          default:
			  printf("�������,�����˳�\n");
			  return 0;
		  }
          /********** End **********/
        printf("%d��%d����%d��\n",year,month,days);
}
