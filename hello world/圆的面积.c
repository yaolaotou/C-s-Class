#include<stdio.h>
main ()
{
	double area;
	double pi=3.14;
	int r;
	printf("请输入圆的半径r：");
	scanf("%d",&r);
	area=r*r*pi;
	printf("圆的面积为:%lf\n",area);
}
