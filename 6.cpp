/*6 用嵌套for循环输出所有的水仙花数

"水仙花数"是指一个3位数，其各位数字立方和等于该数本身。例如，153是一个水仙花数，因为153 = 13 + 53 + 33
用嵌套for循环输出所有的水仙花数
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
					printf("水仙花是%d\n\n",t);
				}
			}
		}
	}
	











	return 0;
}