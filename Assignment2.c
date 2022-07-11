#include<stdio.h>
#include<conio.h>
int main()
{
    int num,unit,num1,unit1,x,y,z,t,d,temp,sum=0,num2,num3,digit;
    float INR,USD;
    // solution of ques no 1
    printf("Enter a number\n");
    scanf("%d",&num);
   unit = num%10;
   printf("Unit place is %d",unit);                                                                             printf("\n");


    // solution of ques no 2
    printf("Enter a number\n");
    scanf("%d",&num1);
    unit1 = num/10;
     printf("Number without last digit  is %d",unit1);                                                          printf("\n");
  
   
    // solution of ques no 3
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    z = x;
    x = y;
    y = z;
    printf("After swapping, x:y  %d:%d",x,y);                                                                   printf("\n");


    // solution of ques no 4
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("After swapping, x:y  %d:%d",x,y);                                                                   printf("\n");



    // solution of ques no 5
    printf("Enter three digit number\n");
    scanf("%d",&t);
    temp=t;
    while(temp>0)
    {
        d = temp%10;
        sum=sum+d;
        temp=temp/10;   
    }
    printf("Sum of the digits is %d",sum);                                                                   printf("\n");



    // solution of ques no 10
    printf("Enter a number\n");
    scanf("%d",&num2);
    num2 = num2/10;
    num2 = num2 * 10;
    printf("Number stored in a variable with last digit zero is  %d",num2);                                 printf("\n");                                      printf("\n");


    // solution of ques no 11
    printf("Enter a number\n");
    scanf("%d",&num3);
    printf("\nEnter a digit\n");
    scanf("%d",&digit);
    num3 = num3*10;
    num3 = num3 + digit;
    printf("Append number is %d",num3);                                                                       printf("\n");


    // solution of ques no 12
    printf("Enter amount in INR\n");
    scanf("%f",&INR);
    USD = INR/76.23;
    printf("Amount in USD is %f",USD);                                                                       printf("\n");




}