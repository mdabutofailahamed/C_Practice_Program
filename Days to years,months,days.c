#include <stdio.h>
int main()
{
    int year,x,month,day,N;
    printf("Enter the number of days : ");
    scanf("%d",&N);
    year=N/365;
    x=N%365;
    month=x/30;
    day=x%30;
    printf("%d year\n%d month\n%d day\n",year,month,day);
    return 0;
}
