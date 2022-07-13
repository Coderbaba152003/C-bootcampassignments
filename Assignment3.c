#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,day;
    int sp,cp,m1,m2,m3,m4,m5;
    
    

    // solution of question no 1
    printf("Enter a number\n");
    scanf("%d",&a);
    if (a>=0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is non-positive");
    }


    // solution of question no 2
    printf("Enter a number\n");
    scanf("%d",&b);
    if(b%5==0)
    {
        printf("Number is divisible by 5");
    }
    else{
        printf("Number is not divisible by 5");
    }
    

    // solution of question no 3
    printf("Enter a number\n");
    scanf("%d",&c);
    if(c%2==0)
    {
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }


    /*solution of question no 10
    printf("Enter cost price\n");
    scanf("%d",&cp);
    printf("Enter selling price\n");
    scanf("%d",&sp);
    if(sp<cp)
    {   
        cp = cp-sp;
        cp = (cp/sp)/100;
        printf("loss percentage is %d %%",cp);
    }
    else
    {   
        sp = sp-cp;
        sp=(sp/cp)/100;
        printf("profit percentage is %d %%",sp);
    }

    */



   // solution of question no 11

    printf("Enter marks of five subjects\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1<33||m2<33||m3<33||m4<33||m5<33)
    {
        printf("You failed in the examination");
    }
    else{
        printf("You passed the examination");
    }


   // solution of question no 15

    printf("Enter a number\n");
    scanf("%d",&d);
    if (d<0)
    {
        printf("Number is negative");
    }
    else if(d>0)
    {
        printf("Number is positive");
    }
    else 
    {
        printf("Number is zero");
    }
    

    //solution of question no 18
    printf("Enetr month number\n");
    scanf("%d",&day);
    switch (day)
    {
    case 1: printf("There are 31 days");        
        break;
    case 2: printf("There are 29 days");        
        break;
    case 3: printf("There are 31 days");        
        break;
    case 4: printf("There are 30 days");        
        break;
    case 5: printf("There are 31 days");        
        break;
    case 6: printf("There are 30 days");        
        break;
    case 7: printf("There are 31 days");        
        break;
    case 8: printf("There are 31 days");        
        break;
    case 9: printf("There are 30 days");        
        break;
    case 10: printf("There are 31 days");        
        break;
    case 11: printf("There are 30 days");        
        break;
    case 12: printf("There are 31 days");        
        break;
    
    default:
    printf("Wrong day");
        break;
    }  










}