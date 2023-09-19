/*Patterns_3).   
                   *
                 * * *
			   * * * * *
			 * * * * * * *
		   * * * * * * * * *    
*/
#include<stdio.h>
int main()
{
	int i,j,l=5;
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=l-i;j++);
		{
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
