#include <stdio.h>
#define MAX 10000
int main()
{
	int n;
	scanf("%d",&n);
	int p[n];
	int i,flag=0,sum=0;
	int min1,min2;
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	min1=MAX,min2=MAX;
	while(1)
	{
		for(i=0;i<n;i++)
		{
			if(p[i]<min1)
			{
				min1=p[i];
				flag=i;
			}
		}
		p[flag]=MAX;
		for(i=0;i<n;i++)
		{
			if(p[i]<min2)
			{
				min2=p[i];
				flag=i;
			}
		}
		p[flag]+=min1;
		if(min2==MAX)
		{
			break;
		}
		else
		{
			sum+=min1+min2;
			min1=MAX;
			min2=MAX;
		}
	}
	printf("%d",sum);
	return 0;
 }
