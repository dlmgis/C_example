/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ��ܼ����1��ʼ��n����Ȼ����ż����ƽ���ĺͣ�n��
      �������룬����main()�������������n��ż����

------------------------------------------------*/

#include <stdio.h>
void  wwjt(); 
  
int fun(int n)
{
  /**********Program**********/
  
  
  
  
  
  
  /**********  End  **********/
  
}

main()   
{
  int m;
  printf("Enter m: ");
  scanf("%d", &m);
  printf("\nThe result is %d\n", fun(m));
  wwjt();
}   

void wwjt()
{
  FILE *IN,*OUT;
  int t;
  int o;
  int c;
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
  for(c=1;c<=5;c++)
  { 
    fscanf(IN,"%d",&t);
    o=fun(t);
    fprintf(OUT,"%d\n",o);
  }
  fclose(IN);
  fclose(OUT);
}
