/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ��Ӽ�������һ������3�����������ú���fun�ж�
      ���Ƿ�������Ȼ����main�����������Ӧ�Ľ���
      ��Ϣ��
���磺7��������8�������������дfun������������
      ���ܱ�1��������������

-------------------------------------------------*/

#include <stdio.h>
void wwjt();

int fun(int n)
{
  
  /**********Program**********/
  int i,flag=1;
  for (i=2;i<n/2;i++)
  {
	  if(n%i==0)
	  {
		  flag=0;
	  }
	  return flag;
  }
  /**********  End  **********/
} 
    
main()
{
  int m,flag;
  printf("input an integer:");
  scanf("%d",&m);
  flag=fun(m);
  if(flag)
    printf("%d is a prime.\n",m);
  else
    printf("%d is not a prime.\n",m);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int iIN,iOUT,i;
  IN=fopen("5.IN","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..it May Be Changed");
  }
  OUT=fopen("5.out","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  for(i=0;i<10;i++)        
  {        
    fscanf(IN,"%d",&iIN);
    iOUT=fun(iIN);
    fprintf(OUT,"%d\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}
