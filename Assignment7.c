#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,a,b,c,d,num,temp,sum=0,flag=0;


    //solution of question no 1
    printf("Enter a number\n");
    scanf("%d",&n);
    a=-1;
    b=1;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }    
    printf("Nth term is %d  ",c);
    printf("\n");



    //solution of question no 2
    printf("Enter a number\n");
    scanf("%d",&n);
    a=-1;
    b=1;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    }    



    //solution of question no 3
    printf("Enter the number you want to search\n");
    scanf("%d",&num);
    a=-1;
    b=1;
   for(i=-1;i<=num;i++)
   {
        c=a+b;
        if(num==c)
        {
            printf("Number is present in series\n");
            break;
        }
        else if(c>num)
        {
            printf("Number is not present in series\n");
            break;
        }
        else
        {
            a=b;
            b=c;
        }
   }  
   


    // solution of question no 4
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    d=1;
    if(a>b)
    {
        while(d!=0)
        {
            d = a % b;
            if(d==0)
            {
                printf("HCF is %d ",b);
                break;
            }
            else
            {
                a = b;
                b = d;

            }
        }
    }
    else
    {
         while(d!=0)
        {
            d = b % a;
            if(d==0)
            {
                printf("HCF is %d ",a);
                break;
            }
            else
            {
                b = a;
                a = d;

            }
        }
    }



    // solution of question no 5
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    d=1;
    if(a>b)
    {
        while(d!=0)
        {
            d = a % b;
            if(d==0)
            {
                printf("HCF is %d ",b);
                break;
            }
            else
            {
                a = b;
                b = d;

            }
        }
    }
    else
    {
         while(d!=0)
        {
            d = b % a;
            if(d==0)
            {
                printf("HCF is %d ",a);
                break;
            }
            else
            {
                b = a;
                a = d;

            }
        }
        if(a==1)
        {
            printf("Number are co-prime");
        }
        else
        {
            printf("Numbers are not co-prime");
        }
    }



    // solution of question no 6
    for(i=2;i<=100;i++)
    {
        flag=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
              flag=flag+1;
            }
        }
            if(flag==1)
            {
                printf("%d ",i);
            }
    }



    // solution of question no 7
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        flag=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
              flag=flag+1;
            }
        }
            if(flag==1)
            {
                printf("%d ",i);
            }
    }



    // solution of question no 8
    printf("Enter a number\n");
    scanf("%d",&a);
    for(i=a+1; 1 ;i++)
    {
        flag=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
              flag=flag+1;
            }
        }
            if(flag==1)
            {
                printf("%d ",i);
                break;
            }
    }



    // solution of question no 9
    printf("Enter a number\n");
    scanf("%d",&num);
    temp = num;
    while(temp>0)
    {
        d = temp%10;
        sum = sum+(d*d*d);
        temp=temp/10;
    }
    if(num==sum)
    {
        printf("Number is an armstrong number\n");
    }
    else
    {
        printf("Number is not an armstrong number\n");
    }


    // solution of question no 10
    for(i=1;i<=1000;i++)
    {
        temp = i;
        while(temp>0)
        {
            d = temp%10;
            sum = sum+(d*d*d);
            temp=temp/10;
        }
            if(i==sum)
            {
                printf("%d ",i);
            }
            sum=0;        
    }        


}