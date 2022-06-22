#include<stdio.h>
int main()
{
    int number,modulas,binary=0,i=1;
    printf("Enter a decimal number : ");
    scanf("%d",&number);
    while(number!=0)
    {
        modulas=number%2;
        number=number/2;
        binary=binary+(modulas*i);
        i=i*10;
    }
    printf("%d",binary);


    return 0;
}
