/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ��Գ���Ϊ7���ַ����ַ��������ס�β�ַ��⣬����
      ��5���ַ����������С�
���磺ԭ�����ַ���ΪCEAedca,��������ΪCedcEAa��

------------------------------------------------*/

#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void  wwjt(); 
  
void fun(char *s,int num)
{
  /**********Program**********/
  int i,temp;
  for(i=1;i<num-2;i++)
  {
	if(s[i]<s[i+1])
	{
		temp=s[i];
		s[i]=s[i+1];
		s[i+1]=temp;
	}
  }
  /**********  End  **********/
}

main()
{
  char s[10];
  printf("����7���ַ����ַ���:");
  gets(s);
  fun(s,7);
  printf("\n%s",s);
  wwjt();
}

void wwjt()     
{     
  
  int i;
  char a[100];
  FILE *rf, *wf ;     
  rf = fopen("in.dat", "r") ;
  wf = fopen("out.dat", "w") ;
  for(i=0;i<3;i++)
  {
    fscanf(rf, "%s", &a);
    fun(a,7);
    fprintf(wf, "%s", a);
    fprintf(wf, "\n");
  }
  
  fclose(rf);
  fclose(wf);
}
