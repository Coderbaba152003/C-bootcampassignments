#include<stdio.h>
int main()
{
        int i,n;

        // solution of question no 1
        printf("How many times you want to print?");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            printf("MySirG\n");
        }


        // solution of question no 2
        printf("How many times you want to print?");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            printf("%d  ",i);
        }
        printf("\n");


        // solution of question no 3
        printf("How many times you want to print?");
        scanf("%d",&n);
        for(i=n; i>=1; i--)
        {
            printf("%d  ",i);
        }
        printf("\n");


        // solution of question no 4
        printf("How many times you want to print?");
        scanf("%d",&n);
        for(i=1; i<=2*n; i=i+2)
        {
            printf("%d  ",i);
        }
        printf("\n");


        // solution of question no 5
        printf("How many times you want to print?");
        scanf("%d",&n);
        for(i=2*n-1; i>=1; i=i-2)
        {
            printf("%d  ",i);
        }
        printf("\n");


        // solution of question no 6
        printf("How many times you want to print?");
        scanf("%d",&n);
        for(i=2; i<=2*n; i=i+2)
        {
            printf("%d  ",i);
        }
        printf("\n");


        // solution of question no 7
        printf("How many times you want to print?");
        scanf("%d",&n);
        for(i=2*n; i>=2; i=i-2)
        {
            printf("%d  ",i);
        }
        printf("\n");


        // solution of question no 8
        printf("How many times you want to print?");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            printf("%d  ",i*i);
        }
        printf("\n");


        // solution of question no 9
        printf("How many times you want to print?");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            printf("%d  ",i*i*i);
        }


        // solution of question no 10
        printf("Enter a number ");
        scanf("%d",&n);
        for(i=1; i<=10; i++)
        {
            printf("%d * %d = %d\n",n,i,n*i);
        }




}