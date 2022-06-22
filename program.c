#include<stdio.h>
int main()
{
    int index,n,sum,sterting,ending;
    printf("Enter the sterting number\n");
    scanf("%d",&sterting);
    printf("Enter the ending number\n");
    scanf("%d",&ending);
    sum=0;
    for(index=sterting;index<=ending;index++){
        sum=sum+index;
    }
    printf("%d+...+%d=%d",sterting,ending,sum);

    return 0;
}
