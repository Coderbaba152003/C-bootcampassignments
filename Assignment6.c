#include<stdio.h>
int main()
{
    int n,i,sum=0,fact=1,temp,count=1,d,num=0,a,b,flag=0;

    // solution of question no 1
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers is %d",n,sum);
    printf("\n");


    // solution of question no 2
    printf("Enter a number\n");
    scanf("%d",&n);
    sum = 0;
    for(i=2; i<=2*n; i=i+2)
    {
        sum = sum + i;
    }
    printf("Sum of first %d even numbers is %d",n,sum);
    printf("\n");


    // solution of question no 3
    printf("Enter a number\n");
    scanf("%d",&n);
    sum = 0;
    for(i=1; i<=2*n-1; i=i+2)
    {
        sum = sum + i;
    }
    printf("Sum of first %d odd numbers is %d",n,sum);
    printf("\n");


    // solution of question no 4
    printf("Enter a number\n");
    scanf("%d",&n);
    sum = 0;
    for(i=1; i<=n; i=i+1)
    {
        sum = sum + (i*i);
    }
    printf("Sum of squares of first %d natural numbers is %d",n,sum);
    printf("\n");


    // solution of question no 5
    printf("Enter a number\n");
    scanf("%d",&n);
    sum = 0;
    for(i=1; i<=n; i=i+1)
    {
        sum = sum + (i*i*i);
    }
    printf("Sum of cubes of first %d natural numbers is %d",n,sum);
    printf("\n");


    // solution of question no 6
    printf("Enter a number\n");
    scanf("%d",&n); 
    for(i=1; i<=n; i=i+1)
    {
        fact = fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    printf("\n");


    // solution of question no 7
    printf("Enter a number ");
    scanf("%d",&n);
    sum = 0;
    temp = n;
    while(temp>0)
    {
        d = temp%10;
        sum = sum+d;
        temp = temp/10;
        count=count+1;
    
    }
    count=count-1;
    printf("Number of digits is %d ",count);


    // solution of question no 8
    printf("Enter a number ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }  
    }
    if(flag==1)
    {
        printf("Not a Prime Number");
    }
    else{
        printf("Prime number");
    }

    // solution of question no 9
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    for(i=1 ;i<=(a*b); i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("LCM is %d ",i);
        }
    }


    // solution of question no 10
    printf("Enter a number ");
    scanf("%d",&n);
    temp = n;
    while(temp>0)
    {
        d = temp%10;
        num = num*10+d;
        temp = temp/10;
    }
    printf("Reverse of the number is %d ",num);

}