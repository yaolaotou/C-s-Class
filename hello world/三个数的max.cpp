#include<stdio.h>
main()
{
	int a,b,c;
	int max;
	printf("请输入三个数：");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		max = a;
	}
	else if(b>a&&b>c)
	{
		max = b;
	}
	else
	{
		max=c;
	}
	printf("%d\n",max);
}