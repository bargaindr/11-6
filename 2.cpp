//2 用for循环求一个数的所有因子
/*
输入一个数
用for循环这个数的所有因子
比如6的因子有1,2,3，即除了6本身之外，所有能被6整除的数
比如28的的因子有1,2,4,7,14，即除了28之外，所有能被28整除的数
*/
#include <stdio.h>
#include <windows.h>
int main()
{
         int i,s;
		 printf("请输入一个数\n");
		 scanf("%d",&s);
		 printf("\n\n");
		 printf("%d的因子是：",s);
       for(i=1;i<s;i++)
	   {
		   
		   
		   if(s%i==0)
		   {
			     
			   printf("%d  ",i);
			   
		   }
		 

	   }
	    printf("\n\n");

















	return 0;
}