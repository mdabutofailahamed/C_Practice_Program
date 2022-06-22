#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark : ");
    scanf("%d",&mark);
    if(mark>=0 && mark<=39){
        printf("Leter Grade:F\n");
        printf("Grade Point=0.00\n");
    }
    else if(mark>=40 && mark<=44){
        printf("Leter Grade:D\n");
        printf("Grade Point=2.00\n");
    }
    else if(mark>=45 && mark<=49){
        printf("Leter Grade:C\n");
        printf("Grade Point=2.25\n");
    }
    else if(mark>=50 && mark<=54){
        printf("Leter Grade:C+\n");
        printf("Grade Point=2.58\n");
    }
    else if(mark>=55 && mark<=59){
        printf("Leter Grade:B-\n");
        printf("Grade Point=2.75\n");
    }
    else if(mark>=60 && mark<=64){
        printf("Leter Grade:B\n");
        printf("Grade Point=3.00\n");
    }
    else if(mark>=65 && mark<=69){
        printf("Leter Grade:B+\n");
        printf("Grade Point=3.25\n");
    }
    else if(mark>=70 && mark<=74){
        printf("Leter Grade:A-\n");
        printf("Grade Point=3.50\n");
    }
    else if(mark>=75 && mark<=79){
        printf("Leter Grade:A\n");
        printf("Grade Point=3.75\n");
    }
    else if(mark>=80 && mark<=100){
        printf("Leter Grade:A+\n");
        printf("Grade Point=4.00\n");
    }
    else if(mark<=0 || mark>=100){
        printf("Invalid Nimber\n");
    }
        return 0;
}

