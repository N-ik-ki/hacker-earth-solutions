#include<stdio.h>
#include<stdlib.h>
int main()
{
	int end, i, j, count=0;
	scanf("%d",&end);

	for(i=2; i<=end; i++)
	{
		count=0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
