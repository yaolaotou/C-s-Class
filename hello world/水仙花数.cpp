#include <stdio.h>
void main( )
{int i,j,k,n;
 printf("water flower number is:\n");
 for(n=100;n<1000;n++)
 {i=n/100;            /*�ֽ����λ*/
 j=n/10-i*10;         /*�ֽ��ʮλ*/
 k=n%10;            /*�ֽ����λ*/
 if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
     printf("%-5d",n);}
printf ("\n");
}
