/*------------------------------------------------
��������ơ�
--------------------------------------------------
�ȼ��ж�
��������İٷ��Ƴɼ�score��ת������Ӧ������Ƴɼ�grade���������֪ת����׼Ϊ��
grade={��(A  90��score��100@B  80��score<90@C   70��score<80@D   60��score<70
       @E   0��score<60)}
Ҫ����switchʵ�֣�switch֮��������ȼ�����Ҫ��ÿ��switch��ֱ�������

------------------------------------------------*/

#include <stdio.h>
void main()
{
        int score;
        char grade;
        printf("����ɼ���");
        scanf("%d",&score);
  /**********Program**********/
		score/=10;
		switch(score)
		{
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
        case 6:
			grade = 'D';
			break;
		default:
			grade = 'E';
			break;

		}
          /**********  End  **********/
        printf("�ɼ��ȼ�Ϊ��%c\n",grade);
}
