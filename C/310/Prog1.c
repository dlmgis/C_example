/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ����㲢�����������n����������֮�ͣ�������1��
      ������
ע�⣺n��ֵ������1000��
���磺n��ֵΪ855ʱ��Ӧ���704��

------------------------------------------------*/

#include <stdio.h>
void wwjt();
   
int fun(int n)
{
  
  /**********Program**********/
  
  /**********  End  **********/
  
}

main()
{
  printf("s=%d\n",fun(855));
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int iIN,iOUT,i;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..it May Be Changed");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  for(i=0;i<5;i++)
  {
    fscanf(IN,"%d",&iIN);
    iOUT=fun(iIN);
    fprintf(OUT,"%d\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}
