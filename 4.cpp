/*
阅读下列程序，程序的输出结果是？
*/
#include <stdio.h>
#include <windows.h>
int main()
{
	int i,j,k,s;
	for(i=1;i<10;i++)
	{
	  
		printf("百位是%d\n",i);
		
	
		for(j=0;j<10;j++)
		{
			printf("十位是%d\n",j);
			printf("个位递增\n");

			for(k=0;k<10;k++)
			{
				s=i*100+j*10+k;
				
				printf("%d\n",s);
				Sleep(1000);

			}
		}
	}
	return 0;
}

