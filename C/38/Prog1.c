/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ��������Ͳ���n��������ͼ��ʽ��ֵ��

------------------------------------------------*/

#include <stdio.h>
#include"conio.h"
void  wwjt(); 
    
double fun(int n)
{
  /**********Program**********/
  //��Ŀ��ȫ
  /**********  End  **********/
  
}

main()   
{
  int  m;
  printf("Enter m: ");
  scanf("%d", &m);
  printf("\nThe result is %f\n", fun(m));
  wwjt();
}   

void wwjt()
{
  FILE *IN,*OUT;
  int s ;
  int t;
  double o;
  
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Read FILE Error");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write FILE Error");
  } 
  for(s=1;s<=5;s++)
  { 
    fscanf(IN,"%d",&t);
    o=fun(t);
    fprintf(OUT,"%f\n",o);
  }
  fclose(IN);
  fclose(OUT);
}
