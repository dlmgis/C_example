/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ����ú���fun�ж�һ����λ���Ƿ�"ˮ�ɻ���"��
      ��main�����дӼ�������һ����λ��������
      ���жϽ�������дfun������
˵������ν"ˮ�ɻ���"��ָһ3λ�������λ����������
      ���ڸ�������
���磺153��һ��ˮ�ɻ�������Ϊ153=1+125+27��

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
  int n,flag;
  scanf("%d",&n);
  flag=fun(n);
  if(flag)
    printf("%d ��ˮ�ɻ���\n",n);
  else
    printf("%d ����ˮ�ɻ���\n",n);
  wwjt();
}
void wwjt()
{
  FILE *IN,*OUT;
  int iIN,i;
  int iOUT;
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
  for(i=0;i<10;i++)
  {    
    fscanf(IN,"%d",&iIN);
    iOUT=fun(iIN);
    fprintf(OUT,"%d\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}
