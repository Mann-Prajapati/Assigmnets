/*6). 
      *
      * *
	  * * *
	  * * * *
	  * * * * * 
	  * * * * * *
	  * * * * *
	  * * * *
	  * * *
	  * * 
	  *            
*/
#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=0;i<6;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(k=0;k<5;k++)
	{
		for(l=5;l>k;l--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
