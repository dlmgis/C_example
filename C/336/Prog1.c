/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ����ַ�����ɾ��ָ�����ַ���ͬһ��ĸ�Ĵ�Сд
      ����ͬ�ַ�����
���磺������ִ��ʱ�����ַ���Ϊ��turbocandborlandc++
      �Ӽ����������ַ���n����������Ϊ��turbocadbo
      rladc++�����������ַ����ַ����в����ڣ�����
      ������ԭ������� 

------------------------------------------------*/

#include <stdio.h>
void  wwjt(); 
  
int fun(char s[],int c)
{
  /**********Program**********/  
  
  
  
  
  
  /**********  End  **********/    
  
}     
main()     
{     
  static char str[]="turbocandborlandc++";
  char ch;     
  printf("ԭʼ�ַ���:%s\n", str);     
  printf("����һ���ַ�:");     
  scanf("%c",&ch);     
  fun(str,ch);     
  printf("str[]=%s\n",str);
  wwjt();     
} 

void wwjt()
{
  FILE *IN,*OUT;
  char i[200];
  char o[200];
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
  fun(i,'n');
  fprintf(OUT,"%s",i);
  fclose(IN);
  fclose(OUT);
}
