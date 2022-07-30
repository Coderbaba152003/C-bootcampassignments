#include<stdio.h>
#include<stdlib.h>


// solution of question no 1 ####################################################################################################

        // int sum(int);
        // int main()
        // {
        //     int n;
        //     printf("Enter How many numbers you want to add: ");
        //     scanf("%d",&n);
        //     printf("Sum is %d ",sum(n));
        // }
        //         int sum(int N)
        //         {
        //             if(N==0)
        //             return 0;
        //             else
        //             return (N+sum(N-1));
        //         }


// solution of question no 2 ####################################################################################################

        // int sum(int);
        // int main()
        // {
        //     int n,r;
        //     printf("Enter how many odd numbers you want to add: ");
        //     scanf("%d",&n);
        //     n = (2*n)-1;
        //     r = sum(n);
        //     printf("Sum is %d ",r);
        // }
        //         int sum(int N)
        //         {
        //             if(N<=0)
        //             return 0;
        //             else
        //             return (N+sum(N-2));                    
        //         }


// solution of question no 3 ####################################################################################################

        // int sum(int);
        // int main()
        // {
        //     int n,r;
        //     printf("Enter how many even numbers you want to add: ");
        //     scanf("%d",&n);
        //     n = (2*n);
        //     r = sum(n);
        //     printf("Sum is %d ",r);
        // }
        //         int sum(int N)
        //         {
        //             if(N<=0)
        //             return 0;
        //             else
        //             return (N+sum(N-2));                    
        //         }


// solution of question no 4 ####################################################################################################

        // int square(int);
        // int main()
        // {
        //     int n,r;
        //     printf("Enter a number: ");
        //     scanf("%d",&n);
        //     r = square(n);
        //     printf("Sum of squares of first %d natural numbers is %d ",n,r);
        // }
        //         int square(int N)
        //         {
        //             if(N<=0)
        //             return 0;
        //             else 
        //             return (N*N+square(N-1));
        //         }


// solution of question no 5 ####################################################################################################

        // int sumOfDigits(int num)
        // {
        //         if (num == 0)
        //                 return 0;
        //         return num % 10 + sumOfDigits(num / 10);
        // }

        // int main()
        // {
        //         int number;
        //         printf("Enter a number: ");
        //         scanf("%d",&number);
        //         printf("Sum of the digits is %d ",sumOfDigits(number));
        // }


// solution of question no 6 ####################################################################################################

        // int factorial(int);
        // int main()
        // {
        //     int n;
        //     printf("Enter a number to find factorial: ");
        //     scanf("%d",&n);
        //     printf("Factorial of %d is %d",n,factorial(n));
        // }
        //         int factorial(int N)
        //         {
        //             if(N==0)
        //             return 1;
        //             else 
        //             return (N*factorial(N-1));
        //         }


// solution of question no 7 ####################################################################################################

        // int hcf(int num1, int num2)
        // {
        //         int divisor, dividend, remainder;
        //         divisor = num1 < num2 ? num1 : num2;
        //         dividend = num1 > num2 ? num1 : num2;
        //         remainder = dividend % divisor;
        //         if (remainder == 0)
        //                 return divisor;
        //         hcf(remainder, divisor);
        // }

        // int main()
        // {
        //        int number1,number2;
        //         printf("Enter two numbers: ");
        //         scanf("%d%d",&number1,&number2);
        //         printf("HCF is %d ",hcf(number1,number2));    
        // }


// solution of question no 8 ####################################################################################################

                // int firstnTermsOfFibonacciSeries(int n)
                // {
                //         if (n == 1)
                //                 return 0;
                //         if (n == 2)
                //                 return 1;
                //         return firstnTermsOfFibonacciSeries(n - 1) + firstnTermsOfFibonacciSeries(n - 2);
                // }

                //  int main()
                //  {
                //         int n;
                //         printf("How Many Terms:");
                //         scanf("%d", &n);
                //         printf("First 5d Terms of Fibonacci Series:-\n");
                //         for (int i = 1; i <= n; i++)
                //         printf("%d ", firstnTermsOfFibonacciSeries(i));
                //  }


// solution of question no 9 ####################################################################################################

                // int countDigitsInNumber(int num)
                // {
                //         int count = 0;
                //         if (num > 0)
                //                 count++;
                //         else
                //                 return 0;
                //         return count + countDigitsInNumber(num / 10);
                // }        

                // int main()
                // {
                //         int num;
                //         printf("Enter A  Number:");
                //         scanf("%d", &num);
                //         printf("Digits In Entered Number: %d", countDigitsInNumber(num));
                // }


// solution of question no 10 ###################################################################################################

                // int calculatePower(int base, int power)
                // {

                //         if (power == 0)
                //                 return 1;
                //         if (power > 0)
                //                 return base * calculatePower(base, --power);
                //         else
                //                 return 1.0 / base * calculatePower(base, ++power);
                // }

                // int main()
                // {
                //         int base, power;
                //         printf("Enter Base and Power:");
                //         scanf("%d%d", &base, &power);
                //         printf("%d Raised to Power %d is %.2f", base, power, calculatePower(base,power));
                // }