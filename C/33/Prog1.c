/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ�����һ���ַ��������˴˴���ֻ�������е���ĸ��
      ������ͳ�������ɴ��а�������ĸ������
���磺������ַ���Ϊab234$df4�������ɵĴ�Ϊabdf ��

------------------------------------------------*/

#include <stdio.h>
#include <conio.h>
#define N 80
void wwjt();
   
fun(char *ptr)
{
  
  /**********Program**********/
  
  
  
  
  
  
  /**********  End  **********/
  
}

main()
{
  char str[N];
  int s;
  printf("input a string:");gets(str);
  printf("The origINal string is :"); puts(str);
  s=fun(str);
  printf("The new string is :");puts(str);
  printf("There are %d char IN the new string.",s);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  char sin[N];
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
  fscanf(IN,"%s",sin);
  iOUT=fun(sin);
  fprintf(OUT,"%d %s\n",iOUT,sin);
  fclose(IN);
  fclose(OUT);
}
