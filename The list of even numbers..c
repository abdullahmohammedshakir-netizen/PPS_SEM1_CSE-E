#include<stdio.h>
int main()
{

    int num1, num2, result;
    char operand;

printf("\n ENTER THE FIRST NUMBER");
scanf("%d" ,&num1);

printf("\n ENTER THE SECOND NUMBER");
scanf("%d" ,&num2);

printf("\n ENTER THE OPERAND");
scanf(" %c" ,&operand);

switch(operand)
{
   case '+': result = num1 + num2;
             printf("Sum of %d and %d is %d" , num1,num2,result);
             break;
   case '-': result = num1 - num2;
             printf("Difference of %d and %d is %d" , num1,num2,result);
             break;
   case '*': result = num1 * num2;
             printf("Product of %d and %d is %d" , num1,num2,result);
             break;
   case '/': result = num1/ num2;
             printf("Division of %d and %d is %d" , num1,num2,result);
             break;
   default : printf("invalid oprand");
             break;
}
return 0;

}
