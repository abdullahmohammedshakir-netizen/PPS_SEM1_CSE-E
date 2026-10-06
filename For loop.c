#include<stdio.h>
int  main()
{
int num, i,product;
printf("ENTER A NUMBER :");
scanf("%d", &num);

for(i=1;i<=10;i++)
{
    product= num*i;
    printf("\n %d*%d=%d",num,i,product);
}
return 0;
}
