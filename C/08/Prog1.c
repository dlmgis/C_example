/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���5��5�о�����������Խ�����Ԫ��֮�͡�ע�⣬
      �����Խ����ཻ��Ԫ��ֻ��һ�Ρ�
���磺�������и����ľ���������Խ��ߵĺ�Ϊ45��

------------------------------------------------*/

#include <stdio.h>
#define M 5
void wwjt();
   
int fun(int a[M][M])
{
  
  /**********Program**********/
  
  int i,sum=0;
  for(i=0;i<M;i++)
  {
	sum+=a[i][i];
	sum+=a[M-1-i][i];
  }
  return sum-a[M/2][M/2];
  
  
  
  /**********  End  **********/
  
}

main()
{
  int a[M][M]={{1,3,5,7,9},{2,4,6,8,10},{2,3,4,5,6},{4,5,6,7,8},{1,3,4,5,6}};
  int y;
  y=fun(a);
  printf("s=%d\n",y);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int iIN[M][M],iOUT;
  int i,j;
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
   {  for(i=0;i<M;i++)
  for(j=0;j<M;j++)
    fscanf(IN,"%d",&iIN[i][j]);
  iOUT=fun(iIN);
  fprintf(OUT,"%d\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}
