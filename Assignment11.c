#include<stdio.h>


// solution of question no 1 ###############################################################################

        // int lcm(int,int);
        // int main()
        // {
        //     int a,b;
        //     printf("Enter two numbers: ");
        //     scanf("%d%d",&a,&b);
        //     printf("LCM is %d ",lcm(a,b));
        // }
        //         int lcm (int a1,int b1)
        //         {
        //             int i;
        //             for(i=2; i<=a1*b1; i++)
        //             {
        //                 if(i%a1==0 && i%b1==0)
        //                 return i;
        //             }
        //         }


// solution of question no 2 ###############################################################################

        // int hcf(int,int);
        // int main()
        // {
        //     int a,b;
        //     printf("Enter two numbers: ");
        //     scanf("%d%d",&a,&b);
        //     printf("HCF is %d ",hcf(a,b));
        // }
        //         int hcf(int a1,int b1)
        //         {
        //              int i;
        //              for(i=2; i<=a1*b1; i++)
        //              {
        //                 if(i%a1==0 && i%b1==0)
        //                 return ((a1*b1)/i);
        //             }
        //         }


// solution of question no 3 ###############################################################################
       
        // int prime(int);
        // int main()
        // {
        //     int n,r;
        //     printf("Enter a number: ");
        //     scanf("%d",&n);
        //     r = prime(n);
        //     if(r == 1)
        //     printf("Number is Prime");
        //     else 
        //     printf("Number is not Prime");
        // }
        //         int prime(int N)
        //         {
        //             int i,count=0;
        //             for(i=2; i<=N; i++)
        //             {
        //                 if(N%i==0)
        //                 count=count+1;
        //             }
        //             if(count==1)
        //             return 1;
        //         }


// solution of question no 4 ###############################################################################

        // int prime(int);
        // int main()
        // {
        //     int n;
        //     printf("Enter a number: ");
        //     scanf("%d",&n);
        //     printf("Next Prime Number is %d ",prime(n));
        // }
        //         int prime(int N)
        //         {
        //             int i,j,flag;
        //             for(i=N+1; 1 ;i++)
        //             {
        //                 flag=0;
        //                 for(j=2;j<=i;j++)
        //                 {
        //                     if(i%j==0)
        //                     {
        //                     flag=flag+1;
        //                     }
        //                 }
        //                     if(flag==1)
        //                     {
        //                         return i;
        //                         break;
        //                     }
        //             }
        //         }


// solution of question no 5 ################################################################################

        // void prime(int);
        // int main()
        // {
        //     int n;
        //     printf("Enter a number: ");
        //     scanf("%d",&n);
        //     prime(n);
        // }
        //         void prime(int N)
        //         {
        //             int i,j,count=0,num=0;
        //             for(i=2; 1 ;i++)
        //             {
        //                 count=0;
        //                 for(j=2;j<=i;j++)
        //                 {
        //                     if(i%j==0)
        //                     count=count+1;
        //                 }
        //                 if(count==1)
        //                 {
        //                     printf("%4d",i);
        //                     num=num+1;
        //                 }
        //                 if(N == num)
        //                 break;                        
        //             }
        //         }



// solution of question no 6 #################################################################################

        // void prime(int,int);
        // int main()
        // {   
        //     int a,b;
        //     printf("Enter two numbers: ");
        //     scanf("%d%d",&a,&b);
        //     prime(a,b);
        // }
        //         void prime(int a1,int b1)
        //         {
        //             int flag,i,j;
        //              for(i=a1;i<=b1;i++)
        //              {
        //                 flag=0;
        //                 for(j=2;j<=i;j++)
        //                 {
        //                     if(i%j==0)
        //                     flag=flag+1;
        //                 }
        //                     if(flag==1)
        //                         printf("%d ",i);
        //             }
        //         }

// solution of question no 7 ################################################################################

        // void series(int);
        // int main()
        // {
        //     int n;
        //     printf("How many numbers you want to print? ");
        //     scanf("%d",&n);
        //     series(n);
        // }
        //         void series(int N)
        //         {
        //             int a=-1,b=1,c,i;
        //             for(i=1; i<=N; i++)
        //             {
        //                 c = a + b;
        //                 printf("%4d",c);

        //                 a = b;
        //                 b = c;
        //             }
        //         }


// solution of question no 8 ####################################################################################################

        int combination(int N,int R)
        {
                return factorial(N)/(factorial(N-R)*factorial(R));                                
        }
        void pascal(int n)
        {
                int i,j;
                for(i=0; i<n; i++)
                {
                        for(j=0; j<n; j++)
                        {
                                
                        }
                }
        }
        int main()
        {
                int n;
                printf("How many rows you want to print: ");
                scanf("%d",&n);
                pascal(n);
        }

        


// solution of question no 9 ################################################################################

        // void sum(int);
        // int main()
        // {
        //     int n;
        //     printf("Enter a number to find square: ");
        //     scanf("%d",&n);
        //     sum(n);
        // }
        //         void sum(int N)
        //         {
        //             printf("Square of the number is %d ",N*N);
        //         }


// solution of question no 10 ################################################################################
    
        // void sum(void);
        // int main()
        // {
        //     sum();
        // }
        //         void sum()
        //         {
        //             int i,j,sum=0,fact=1;
        //             for(i=1; i<=5; i++)
        //             {
        //                 for(j=1;j<=i;j++)
        //                 {
        //                     fact = fact * j;
        //                 }
        //                 sum = sum + fact/i;
        //                 fact=1;
        //             }
        //             printf("Sum is %d ",sum);
        //         }