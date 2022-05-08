#include <stdio.h>
char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
void f(int n)
{
	if(n==1)
	{
		printf("%c",'A');
	}
	else
	{
		f(n-1);
		printf("%c",a[n-1]);
		f(n-1);
	}
}
int main ()
{
	int n;
	scanf("%d",&n);
	f(n);
	return 0;	
} 

