/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ����N��M������������Ԫ�ؼ������ڵ������꼰
      �����꣨������Ԫ�ز�Ψһ��ѡ��λ������ǰ��
      ��һ������
���磺���������Ϊ:
                   1   2   3
                   4   15  6
                   12  18  9
                   10  11  2

      ����������Ϊ18,������Ϊ2��������Ϊ1��

------------------------------------------------*/

#define N 4
#define M 3
#include <stdio.h>
void wwjt();
     
int Row,Col;

int fun(int array[N][M])
{
  
  /**********Program**********/
  
  /**********  End  **********/
  
}

main()
{
  int a[N][M],i,j,max;
  printf("input a array:");
  for(i=0;i<N;i++)
    for(j=0;j<M;j++)
      scanf("%d",&a[i][j]);
    for(i=0;i<N;i++)
    {
      for(j=0;j<M;j++)
        printf("%d",a[i][j]);
      printf("\n");
    }
    max=fun(a);
    printf("max=%d,row=%d,col=%d",max,Row,Col);
    wwjt();
}


void wwjt()
{
  FILE *IN,*OUT;
  int iIN[N][M],iOUT,i,j;
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
  for(i=0;i<N;i++)
    for(j=0;j<M;j++)
      fscanf(IN,"%d",&iIN[i][j]);
    iOUT=fun(iIN);
    fprintf(OUT,"%d %d %d\n",iOUT,Row,Col);
    fclose(IN);
    fclose(OUT);
}
