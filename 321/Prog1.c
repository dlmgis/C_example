/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���д����fun�书���ǣ����������β�m����������
      ��ʽ��ֵ��y=1/2!+1/4!+��+1/m!��m��ż����

------------------------------------------------*/

#include <stdio.h>
void wwjt();

double fun(int m)   
{
  /**********Program**********/
  
  
  
  
  
  /**********  End  **********/
}

main()   
{
  int n;   

  printf("Enter n: ");   
  scanf("%d", &n);   
  printf("\nThe result is %1f\n", fun(n));
  wwjt();  
}   

void wwjt()
{
  FILE *IN,*OUT;
  int t;
  double o;
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
    fprintf(OUT,"%f\n",o);
  }
  fclose(IN);
  fclose(OUT);
}
