/*3 编程找出1000以内的所有完数

一个数如果恰好等于它的因子之和，这个数就称为"完数"，例如，6的因子为1,2,3，而6=1+2+3，因此6是"完数"
编程找出1000以内的所有完数,并输出该完数的所有因子
*/

#include <stdio.h>
#include <windows.h>
int main()
{
         int i,s,he;
		
		
		  printf("1000以内的因子数是：\n\n");

		
		 for(s=1;s<=1000;s++)
		 {
			 he=0;
			 for(i=1;i<s;i++)
			 {
		   
		   
		   
				 if(s%i==0)
				 {
			     
			   
			
					 he=he+i;
				 }
		   
		 
		 

			 }
			 if(he==s)
			 {
				 printf("%d",he);
				 printf("\n\n");

			 }
			  
		 
	    
			 

	    
			 

		 }
		    
      
















	return 0;
}