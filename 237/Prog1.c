/*------------------------------------------------
【程序设计】
--------------------------------------------------

问题描述：
有一天，一位百万富翁遇到一个陌生人，陌生人找他谈一个换钱的计划。
陌生人对百万富翁说："我每天给你10万元，而你第一天只需给我1分钱，
第二天我仍给你10万元，你给我2分钱，第三天我给你10万元，你给我4分钱,……。
你每天给我的钱是前一天的2倍，直到满一个月（30天）为止"。
百万富翁很高兴，欣然接受了这个契约。
请编程计算在这一个月陌生人总计给百万富翁多少钱，
百万富文总计给陌生人多少钱？
------------------------------------------------*/

#include <stdio.h>
void main()
{
        double y;
        double money;
        int day;
          /**********Program**********/
		day=30;
		money=1;
		y=0;
		while(day--)
		{
			y+=money*2;
		}
          /********** End **********/

        printf("富翁给陌生人：%lf万元\n",y);
        printf("陌生人给富翁：%lf万元\n",30*10.0);

}
