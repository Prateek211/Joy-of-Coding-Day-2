#include<stdio.h>
#include<stdlib.h>
void main()
{  
   int a,b,c;
   char op;
   printf("Enter an expression=\n");
   scanf("%d%c%d",&a,&op,&b);
   switch(op)
   {
       case '+':
       c=a+b;
       printf("Sum=%d",c);
       break;
       case '-':
       c=a-b;
       printf("Difference=%d",c);
       break;
       case '*':
       c=a*b;
       printf("Product=%d",c);
       break;
       case '/':
       if(b==0)
       {
           printf("Denominator cannot be 0");
           exit(0);
       }
       c=a/b;
       printf("Quotient=%d",c);
       break;
       case '%':
       if(b==0)
       {
           printf("Denominator cannot be 0");
           exit(0);
       }
       c=a%b;
       printf("Quotient=%d",c);
       break;
       default:
       printf("Invalid operator");
   }
}
