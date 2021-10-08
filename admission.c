#include<stdio.h>
int main()
{
    float rank;
    printf("Enter the rank:\n");
    scanf("%f", &rank);
    if(rank<=3250)
    {
        printf("He will get into all branches\n");
    }
    if(rank>3250&&rank<=6505)
    {
        printf("He can get into all branches except CSE\n");
    }
    if(rank>6505&&rank<=12012)
    {
        printf("He can get into EandC and MEC\n");
    }
    if(rank>12012&&rank<=22340)
    {
        printf("He can only get into MEC\n");
    }
    if(rank>22340)
    {
        printf("Admission is not possible");
    }
    return 0;
}
