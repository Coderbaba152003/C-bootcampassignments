#include<stdio.h>

 // solution of question no 1 ###############################################################################################
   
        // float area(float);
        // int main()
        // {

        //         float r;
        //         printf("Enter radius of circle: ");
        //         scanf("%f",&r);
        //         printf("Area of circle is %.2f sq units", area(r));
        // }
        //         float area(float R)
        //         {
        //             return 3.14*R*R;
        //         }


// solution of question no 2 #################################################################################################

        // float simpleinterest(float, float, float );
        // int main()
        // {
        //     float p,r,t;
        //     printf("Enter value of p,r,t: ");
        //     scanf("%f%f%f",&p,&r,&t);
        //     printf("Simple Interest is %.2f ",simpleinterest(p,r,t));
        // }
        //         float simpleinterest(float P, float R, float T)
        //         {
        //             return(P*R*T)/100;
        //         }

// solution of question no 3 #################################################################################################

        // int check(int);
        // int main()
        // {
        //     int n,r;
        //     printf("Enter a Number: ");
        //     scanf("%d",&n);
        //     r = check(n);
        //     if(r==1)
        //     {
        //         printf("Number is even");
        //     }
        //     else
        //     {
        //         printf("Number is odd");
        //     }
        // }        
        //         int check(int N)
        //         {
        //             if(N%2==0)
        //             return 1;
        //             else 
        //             return 0;
        //         }


// solution of question no 4 ####################################################################################################

        // void natural(int);
        // int main()
        // {
        //     int n;
        //     printf("Enter a number: ");
        //     scanf("%d",&n);
        //     natural(n);
        // }
        //         void natural(int N)
        //         {   
        //             int i;
        //             for(i=1; i<=N ;i++)
        //             {
        //                 printf("%4d",i);
        //             }
        //         }


// solution of question no 5 ###################################################################################################

        // void oddnatural(int);
        // int main()
        // {
        //     int n;
        //     printf("Enter a number: ");
        //     scanf("%d",&n);
        //     oddnatural(n);
        // }
        //     void oddnatural(int N)
        //     {
        //         int i;
        //         for(i=1;i<=2*N;i=i+2)
        //         {
        //             printf("%4d", i);
        //         }
        //     }


// solution of question no 6 ####################################################################################################
      
        // int factorial(int);
        // int main()
        // {
        //     int n;
        //     printf("Enter a number: ");
        //     scanf("%d",&n);
        //     printf("Factorial is %d ",factorial(n));
        // }
                // int factorial(int N)
                // {
                //     int i,fact=1;
                //     for(i=1;i<=N;i++)
                //     {
                //         fact = fact*i;
                //     }
                //     return fact;
                // }


// solution of question no 7 ####################################################################################################

        // int combination(int,int);
        // int main()
        // {
        //         int n,r;
        //         printf("Enter values of n and r: ");
        //         scanf("%d%d",&n,&r);
        //         printf("Number of possible combinations are %d ",combination(n,r));
        // }
        //                 int combination(int N,int R)
        //                 {
        //                      return factorial(N)/(factorial(N-R)*factorial(R));                                
        //                 }


// solution of question no 8 ####################################################################################################

        // int permu(int,int);
        // int main()
        // {
        //         int r,n;
        //         printf("Enter values of n and r: ");
        //         scanf("%d%d",&n,&r);
        //         printf("Number of possible combinations are %d ",permu(n,r));
        // }        
        //         int permu(int N,int R)
        //         {
        //                 return factorial(N)/(factorial(N-R));
        //         }


// soution of question no 9 ########################################################################################################

        // int digit(int);
        // int main()
        // {
        //         int n,r;
        //         printf("Enter a digit: ");
        //         scanf("%d",&n);
        //         r = digit(n);
        //         if(r==1)
        //         printf("Digit is present in the number.");
        //         else
        //         printf("Digit is not present in the number.");
        // }
        //         int digit(int N)
        //         {
        //                 int num=258360;
        //                 int i,d,temp;
        //                 temp=num;
        //                 while(temp!=0)
        //                 {
        //                         d = temp%10;
        //                         if(N == d)
        //                         return 1;
        //                         else
        //                         temp = temp/10;
        //                 }
        //         }    


// solution of question no 10 #####################################################################################################
      
        // void prime(int);
        // int main()
        // {
        //     int n;
        //     printf("Enter a number: ");
        //     scanf("%d",&n);
        //     prime(n);
        // }
        //         void prime(int num)
        //         {
        //             int i=0,temp;
        //             temp = num;
        //                 for(i=2; 1; )
        //                 {
        //                    if(temp%i==0)
        //                    {
        //                         printf("%4d",i);
        //                         temp = temp/i;
        //                         if(temp/2==0)
        //                         {
        //                             break;
        //                         }
        //                    } 
        //                    else
        //                     {
        //                         i++;
        //                     }
        //                 }
        //         }
                
