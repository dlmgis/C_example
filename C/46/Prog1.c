/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ��ӵ�λ��ʼȡ�������ͱ���s��ż��λ�ϵ���������
      ����һ����������t�С�     
���磺��s�е���Ϊ��7654321ʱ��t�е���Ϊ��642��
     
------------------------------------------------*/

#include <stdio.h>
void  wwjt(); 
  
long fun (long s,long t)
{
  /**********Program**********/
  //ͬ��һ��
  /**********  End  **********/
  return t;
}  

main()     
{
  long s, t=0,m;
  printf("\nPlease enter s:"); scanf("%ld", &s);     
  m=fun(s,t);
  printf("The result is: %ld\n", m);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int n;
  long i,t=0,m;
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
  for(n=0;n<5;n++)
  {   
    fscanf(IN,"%ld",&i);
    m=fun(i,t);
    fprintf(OUT,"%ld\n",m);
    
  }
  fclose(IN);
  fclose(OUT);
}
