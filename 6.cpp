/*6 ��Ƕ��forѭ��������е�ˮ�ɻ���

"ˮ�ɻ���"��ָһ��3λ�������λ���������͵��ڸ����������磬153��һ��ˮ�ɻ�������Ϊ153 = 13 + 53 + 33
��Ƕ��forѭ��������е�ˮ�ɻ���
*/

#include <stdio.h>
#include <windows.h>
int main()
{
	int g,s,b,he,t;
	
	for(b=1;b<=9;b++)
	{
		he=0;
		t=0;
		for(s=0;s<=9;s++)
		{
			for(g=0;g<=9;g++)
			{
				he=b*100+s*10+g;
				t=b*b*b+s*s*s+g*g*g;
				/*printf("%d\n",he);
				printf("%d\n",t);
				Sleep(1000);*/
				if(he==t)
				{
					printf("ˮ�ɻ���%d\n\n",t);
				}
			}
		}
	}
	











	return 0;
}