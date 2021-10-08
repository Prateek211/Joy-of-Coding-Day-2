#include<stdio.h>
int main()
{
    int book,cost,r,m;
    printf("Enter the number of books:\n");
    scanf("%d", &book);
    if(book<=10000)
    {
        printf("No discount!\n");
        printf("The total cost=%d", book*10);
    }
    if(book>10000&&book<=15000)
    {
        printf("Hey you got 10 percent discount!\n");
        cost=book*10;
        r=cost/10;
        m=cost-r;
        printf("The total cost=%d", m);
    }
    if(book>15000&&book<=20000)
    {
        printf("Hey you get 20 percent discount!\n");
        cost=book*10;
        r=cost/5;
        m=cost-r;
        printf("The total cost=%d", m);
    }
    return 0;
}
