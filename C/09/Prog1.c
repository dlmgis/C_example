/*------------------------------------------------
【程序设计】
--------------------------------------------------

韩信点兵：
 韩信有一队兵，他想知道有多少人，便让士兵排队报数。
按从1至5报数，最末一个士兵报的数为1；按从1至6报数，最末一个士兵报的数为5；
按从1至7报数，最末一个士兵报的数为4；最后再按从1至11报数，
最末一个士兵报的数为10。你知道韩信至少有多少兵吗？


------------------------------------------------*/
#include<stdio.h>

 
void main()
{
  int x;
  int find=0; 
  /**********Program**********/
  for(;;find++)
  {
	  if(find%5==1&&find%6==5&&find%7==4&&find%11==10)
	  {
		  x=find;
		  break;
	  }
  }
  printf("%d\n",x);
  /**********  End  **********/
  
}

