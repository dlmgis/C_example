/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���дһ���������ú�������ͳ��һ������Ϊ2���ַ�
      ������һ���ַ����г��ֵĴ�����
���磺�ٶ�������ַ���Ϊ��asdasasdfgasdaszx67asdmklo��
      �ַ���Ϊ��as,��Ӧ���6��

------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
void  wwjt(); 
  
int fun(char *str,char *substr)
{
  /**********Program**********/
  
  
  
  
  
  
  /**********  End  **********/
}

main()
{
  char str[81],substr[3];
  int n;
  printf("�������ַ����� ");
  gets(str);
  printf("�������ַ����� ");
  gets(substr);
  puts(str);
  puts(substr);
  n=fun(str,substr);
  printf("n=%d\n",n);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int n;
  char i[200];
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
  fscanf(IN,"%s",i);
  n=fun(i,"as");
  fprintf(OUT,"%d",n);
  fclose(IN);
  fclose(OUT);
}
