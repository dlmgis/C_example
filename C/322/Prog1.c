/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ��ж�һ������w�ĸ�λ����ƽ��֮���ܷ�5������
      ���Ա�5�����򷵻�1�����򷵻�0��

------------------------------------------------*/

#include <stdio.h>
#include"conio.h"
void  wwjt(); 
  
int fun(int w)
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
  int c ;
  int t;
  int o;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Read FILE Error");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write FILE Error");
  } for(c=1;c<=5;c++)
  { 
    fscanf(IN,"%d",&t);
    o=fun(t);
    fprintf(OUT,"%d\n",o);
  }
  fclose(IN);
  fclose(OUT);
}
