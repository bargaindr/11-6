/*
�Ķ����г��򣬳�����������ǣ�
*/
#include <stdio.h>
#include <windows.h>
int main()
{
	int i,j,k,s;
	for(i=1;i<10;i++)
	{
	  
		printf("��λ��%d\n",i);
		
	
		for(j=0;j<10;j++)
		{
			printf("ʮλ��%d\n",j);
			printf("��λ����\n");

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

