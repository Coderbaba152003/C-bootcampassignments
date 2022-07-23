#include<stdio.h>
int main()
{
        int i,j,k=1;
        char ch;
        // solution of question no 1
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if(j<=i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            } printf("\n");
        }       printf("\n");


        // solution of question no 2
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if(j>=6-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            } printf("\n");
        }   printf("\n");

        // solution of question no 3
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if(j<=6-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            } printf("\n");
        }   printf("\n");


        // solution of question no 4
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if(j>=i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            } printf("\n");
        }   printf("\n");


        // solution of question no 5
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=9;j++)
            {
                if(j>=6-i&&j<=4+i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            } printf("\n");
        }   printf("\n");



        // solution of question no 6
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=9;j++)
            {
                if(j>=i&&j<=10-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            } printf("\n");
        }   printf("\n");


        // solution of question no 7

        for(i=1;i<=5;i++)
        {
            for(j=1;j<=10;j++)
            {
                if(j<=6-i || j>=5+i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            } printf("\n");
        }   printf("\n");



        // solution of question no 8

        for(i=1;i<=4;i++)
        {   
            k=1;
            for(j=1;j<=7;j++)
            {   
        
                if(j>=5-i && j<=3+i)
                {
                    
                    printf("%d",k);
                    if(j>=4)
                    {
                        k--;
                    }
                    else
                    {
                        k++;
                    }
                }
                else
                {
                    printf(" ");
                }
            } printf("\n");
        }   printf("\n");


    // solution of question no 9
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                printf("%d",k);
                if(j>=4)
                {
                    k--;
                }
                else{
                    k++;
                }
            }
            else
            {
            printf(" ");
            }
        } printf("\n");
    }   printf("\n");


    // solution of question no 10
    for(i=1; i<=4; i++)
    {
        k=1;
        for(j=1; j<=7; j++)
        {
            if((j>=1 && j<=5-i) || (j>=3+i && j<=7))
            {
                printf("%d",k);
            }
             else
            {
                printf(" ");
            }

            if(j<4)
            {
                k++;
            }
            else
            {
                k--;
            }
        }   printf("\n");

    }


     


    // solution of question no 11
    for(i=1;i<=5;i++)
    {
        ch=65;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
               printf("%c",ch);
               if(j>=5)
               {
                ch--;
               }
               else
               {
                ch++;
               }
            }
            else
            {
            printf(" ");
            }
        } printf("\n");
    }       printf("\n");


    // solution of question no 12
    for(i=1;i<=4;i++)
    {
        ch=65;
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
               printf("%c",ch);
               if(j>=4)
               {
                ch--;
               }
               else
               {
                ch++;
               }
            }
            else
            {
            printf(" ");
            }
        } printf("\n");
    }       printf("\n");

    // solution of question no 13
    for(i=1;i<=7;i++)
    {
        ch=65;
        for(j=1;j<=13;j++)
        {
            if(j>=1 && j<=8-i)
            {
               printf("%c",ch);
               ch++;
            }
            else if(j>=i && j>=6+i)
            {
                ch--;
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }
        } printf("\n");
    }       printf("\n");


    // solution of question no 14
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1 || j==i)
            {
                printf("*");
            }
            else if(i==5 && j>=1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }   printf("\n");
    }       printf("\n");


    // solution of question no 15
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==(6-i) || j==5)
            {
                printf("*");
            }
            else if(i==5 && j>=1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }   printf("\n");
    }       printf("\n");



    // solution of question no 16
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==(6-i) || j==(4+i))
            {
                printf("*");
            }
            else if(i==5 && j>=1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }   printf("\n");
    }       printf("\n");



    // solution of question no 17
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==i || j==(10-i))
            {
                printf("*");
            }
            else if(i==1 && j>=1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }   printf("\n");
    }       printf("\n");


    // solution of question no 18
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }   printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(j>=i+1 && j<=9-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }   printf("\n");
    }
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");

    // solution of question no 19
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=18;j++)
        {
            if((j>=4-i && j<=6+i) || (j>=13-i && j<=15+i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }   
        printf("\n");
    }

    for(i=1;i<=10;i++)
    {
        for(j=1;j<=18;j++)
        {
            if(i==1&&j==7)
            {
                printf("MySirG");
            }
            if((i==1)&&(j>=7)&&j<=12)
            {
                continue;
            }
            if(j>=i && j<=18-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
            printf("\n");
    }
}
