/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���������λ����������a��b�ϲ��γ�һ����������c
      �С��ϲ��ķ�ʽ�ǣ� ��a����ʮλ�͸�λ�����η�
      ��c���ĸ�λ�Ͱ�λ��, b����ʮλ�͸�λ�����η�
      ��c����ʮλ��ǧλ�ϡ�     
���磺 ��a=45��b=12�� ���øú����� c=2514��
     
------------------------------------------------*/

#include <stdio.h>
void  wwjt(); 
 
void fun(int a, int b, long *c)     
{
  /**********Program**********/
  //ͬ��һ��
  /**********  End  **********/
}

main()     
{ 
  int a,b; long c;     
  printf("input a, b:");     
  scanf("%d%d", &a, &b);     
  fun(a, b, &c);     
  printf("The result is: %ld\n", c);
  wwjt();     
}  

void wwjt( )     
{  
  FILE *rf, *wf ;     
  int i, a,b ; long c ;     
  rf = fopen("in.dat", "r") ;     
  wf = fopen("out.dat","w") ;     
  for(i = 0 ; i < 10 ; i++) 
  {     
    fscanf(rf, "%d,%d", &a, &b) ;     
    fun(a, b, &c) ;     
    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;     
  }     
  fclose(rf) ;     
  fclose(wf) ;     
}
